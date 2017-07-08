/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 18:01:32 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:19:13 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	int		i;
	int		size;
	char	*s2;

	if (!s)
		return (0);
	i = 0;
	size = ft_strlen(s);
	s2 = (char *)malloc(size * sizeof(char) + 1);
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = f((char)s[i]);
		i++;
	}
	s2[i] = 0;
	return ((char *)s2);
}
