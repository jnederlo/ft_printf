/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 19:01:34 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:28:08 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int				i;
	int				size;
	char			*s2;
	unsigned int	index;

	if (!s)
		return (0);
	i = 0;
	index = 0;
	size = ft_strlen(s);
	s2 = (char *)malloc(size * sizeof(char) + 1);
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = f(index++, (char)s[i]);
		i++;
	}
	s2[i] = 0;
	return ((char *)s2);
}
