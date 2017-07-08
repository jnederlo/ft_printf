/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 15:47:51 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/19 15:47:53 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Call the function f(lst) and set equal to new_list to create new_list elem.
**      f(lst) will go through each element of lst and create new_list.
**
** Set t_list pointer start to new_list to reference start of new list.
**
** While lst->next does not equal NULL;
**      next_node = lst->next; (move through the list)
**      lst = next_node; (I did an extra step so I could visualize easier)
**      if (!(new_list->next = f(lst))) says that if allocation fail return 0.
**      next_node_new = new_list->next; (move through the new list)
**      new_list = next_node_new; (same extra step as above)
**
** Return start of new_list.
*/

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next_node;
	t_list	*new_list;
	t_list	*next_node_new;
	t_list	*start;

	if (!lst)
		return (0);
	new_list = f(lst);
	start = new_list;
	while (lst->next)
	{
		next_node = lst->next;
		lst = next_node;
		if (!(new_list->next = f(lst)))
			return (NULL);
		next_node_new = new_list->next;
		new_list = next_node_new;
	}
	return (start);
}
