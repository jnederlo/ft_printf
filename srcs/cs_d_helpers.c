/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_d_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:08:56 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/16 18:34:22 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	f_sign_space(t_badge *badge, t_type *type, int mod)
{
	if (mod == MOD_ELSE && (badge->sign || badge->space))
		type->ll_int >= 0 ? badge->min_w-- : 0;
	else if (mod == MOD_W || mod == MOD_P)
	{
		if (badge->sign && type->ll_int >= 0)
		{
			ft_putchar('+');
			badge->min_w--;
		}
		else if (type->ll_int < 0)
		{
			ft_putchar('-');
			type->ll_int *= -1;
			badge->min_w--;
		}
		else if (badge->space)
		{
			ft_putchar(' ');
			badge->min_w--;
		}
	}
}

int		count_digit_lli(t_type *type)
{
	int				i;
	long long int	nb;

	nb = type->ll_int;
	i = 0;
	if (nb == 0)
		i = 1;
	if (nb < 0)
	{
		i = 1;
		nb *= -1;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

void	putnbr_lli(long long nb)
{
	if (nb < -9223372036854775807)
		ft_putstr("-9223372036854775808");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			putnbr_lli(nb / 10);
			putnbr_lli(nb % 10);
		}
		else
			ft_putchar(nb + 48);
	}
}
