/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 19:35:49 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:41:35 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char*)dst;
	source = (const unsigned char*)src;
	while (n > 0)
	{
		*dest = *source;
		dest++;
		if (*source == (unsigned char)c)
			return (dest);
		source++;
		n--;
	}
	return (NULL);
}
