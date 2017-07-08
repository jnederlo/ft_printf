/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 19:00:51 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:36:03 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (!little[i])
		return ((char*)big);
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			k = i;
			while (big[k] == little[j] && little[j] && big[k])
			{
				k++;
				j++;
			}
			if (little[j] == '\0')
				return ((char*)&big[i]);
		}
		i++;
	}
	return (0);
}
