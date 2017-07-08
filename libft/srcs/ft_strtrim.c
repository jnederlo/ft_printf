/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 14:05:44 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 19:12:46 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** skipping through the whitespaces in s.
** setting a pointer to first non-whitespace in s.
** if s == NULL it means there was only whitespaces and to return a cpy of s.
** we go to one less than the end of the string s.
** then we move back through the whitespaces at the end of the string s.
** we allocated memmory for *str.
** do the copy of string pointed to by ptr to str.
** return string pointed to by str.
*/

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	char	*ptr;

	if (!s)
		return (0);
	while (ft_is_whitespace(*s))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	ptr = (char *)s;
	i = 1;
	while (i++ < (ft_strlen(ptr)))
		s++;
	while (ft_is_whitespace(*s))
	{
		s--;
		i--;
	}
	if (!(str = ft_strnew(i - 1)))
		return (0);
	str = ft_strncpy(str, ptr, i - 1);
	return (str);
}
