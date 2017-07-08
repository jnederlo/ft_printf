/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:10:15 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:39:36 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	if (!s)
		return (0);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (0);
	ptr = str;
	while (*s && start > 0)
	{
		s++;
		start--;
	}
	while (*s && len-- > 0)
		*str++ = *s++;
	*str = 0;
	return (ptr);
}
