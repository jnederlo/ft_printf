/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:21:05 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:29:53 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Declare newlink of type t_list which is a struct of members *content,
** content_size, and next.
**
** Allocate memmory for newlink of type and size t_list.
**
** If content is NULL initialize content to 0 and size to 0.
**
** If content exists allocate memmory of size (content_size).
**
** Pointing to content use ft_memcpy to copy content into newlink.content.
** Create a copy of the content_size to newlink.content_size.
**
** Set next to point to NULL.
**
** Return the newlink.
*/

#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlink;

	newlink = (t_list *)malloc(sizeof(t_list));
	if (!newlink)
		return (0);
	if (!content)
	{
		newlink->content = 0;
		newlink->content_size = 0;
	}
	else
	{
		newlink->content = malloc(content_size);
		if (!newlink->content)
			return (0);
		newlink->content = ft_memcpy(newlink->content, content, content_size);
		newlink->content_size = content_size;
	}
	newlink->next = NULL;
	return (newlink);
}
