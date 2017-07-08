/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 17:59:57 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/13 13:36:13 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Counts the number of words in a string seperated by delimeter.
** If no words in string, return 0.
** While words > 0, copy each word into array element of # of words.
** Point array element # of words to beginning of newly created string.
** Move to the next word.
** Set the last # of words array element to point to NULL.
** Return a char **.
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**word;
	int		num_words;
	int		i;

	i = 0;
	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	word = (char **)malloc(num_words * sizeof(char *) + 1);
	if (!word)
		return (0);
	while (num_words > 0)
	{
		*word = ft_word_copy(s, c);
		s = ft_next_word(s, c);
		num_words--;
		word++;
		i++;
	}
	*word = NULL;
	return (word - i);
}
