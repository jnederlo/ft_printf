/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 16:55:45 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/06 17:48:23 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (size < dst_len + 1)
		return (src_len + size);
	while (*dst)
		dst++;
	while (dst_len < (size - 1) && *src)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (dst_len + src_len);
}
