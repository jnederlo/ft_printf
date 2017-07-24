/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_u_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:08:56 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/24 14:18:11 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		count_digit_ulli(t_type *type)
{
	int						i;
	unsigned long long int	nb;

	nb = type->ull_int;
	i = 0;
	if (nb == 0)
		i = 1;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	putnbr_ulli(unsigned long long nb)
{
	if (nb >= 10)
	{
		putnbr_ulli(nb / 10);
		putnbr_ulli(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
