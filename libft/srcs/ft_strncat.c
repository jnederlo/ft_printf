/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 11:27:45 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:35:18 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *dest;

	dest = s1;
	while (*dest)
		dest++;
	while (*s2 && n > 0)
	{
		*dest++ = *s2++;
		n--;
	}
	*dest = '\0';
	return (s1);
}
