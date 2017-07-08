/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linestrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 12:07:38 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/12 17:31:46 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_linestrip(char *s, char c)
{
	int		i;
	int		size;
	int		k;
	char	*s1;

	size = ft_strlen(s);
	i = 0;
	while (s[i] != c && s[i])
		i++;
	i++;
	if ((s1 = ft_strnew(size - i)) == 0)
		return (0);
	k = 0;
	while (i < size)
		s1[k++] = s[i++];
	ft_bzero(s, size);
	s = ft_strcpy(s, s1);
	free(s1);
	return (s);
}
