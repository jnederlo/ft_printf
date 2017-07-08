/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 15:52:40 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/06 16:32:45 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	size_t	k;

	i = 0;
	if (!little[i])
		return ((char*)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			k = i;
			while (big[k] == little[j] && big[k] && little[j] && k < len)
			{
				k++;
				j++;
			}
			if (!little[j])
				return ((char*)&big[i]);
		}
		i++;
	}
	return (0);
}
