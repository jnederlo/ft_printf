/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 09:19:43 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:21:42 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int is_neg;

	i = 0;
	nbr = 0;
	is_neg = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
				(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		is_neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - 48;
		i++;
	}
	if (is_neg == 1)
		return (-nbr);
	else
		return (nbr);
}
