/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 20:01:39 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/18 20:01:42 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counts the number of words in a string.
** Words are seperated by a delimiter 'c'.
*/

#include "../includes/libft.h"

int	ft_count_words(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			j++;
		while (*s != c && *s)
			s++;
	}
	return (j);
}
