/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 14:00:13 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:23:19 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char*)dst;
	source = (const unsigned char*)src;
	if (source < dest && dest < (source + len))
	{
		dest = (dest + len - 1);
		source = (source + len - 1);
		while (0 < len)
		{
			*dest-- = *source--;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
