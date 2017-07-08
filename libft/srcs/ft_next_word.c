/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 20:27:56 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/18 20:27:59 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Move through a string and find the next word.
** seperated by the delimiter 'c'.
** Return a pointer to the location where the next word starts.
*/

#include "../includes/libft.h"

char	*ft_next_word(const char *s, char c)
{
	char	*start;
	int		j;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s)
			start = (char *)s;
		while (*s != c && *s)
		{
			s++;
			j++;
		}
		return ((char *)s);
	}
	return (0);
}
