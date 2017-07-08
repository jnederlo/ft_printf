/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 12:17:03 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/19 12:17:06 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** set pointer temp to address of alst list element.
**
** while temp is not pointing to NULL
**      next_node points to pointer next in temp;
**      delete the contents of temp and content size with del function;
**      free the pointer temp;
**      set the temp to the next_node (if next_node points to NULL then we
**          exit the while loop);
**      go until temp points to NULL.
**
** Set the pointer temp to NULL.
*/

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*next_node;

	temp = *alst;
	while (temp)
	{
		next_node = temp->next;
		del(temp->content, temp->content_size);
		free(temp);
		temp = next_node;
	}
	*alst = NULL;
}
