/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:48:50 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/13 16:56:24 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>///REMOVE!!!!!!!!!!!!!!!!!!!!!

void	ft_padding(t_badge *badge, long long d, char c, int mod)
{
	int	nbr;
	int	prec;
	int	width;
	int	specifier;

	nbr = d == 0 && badge->prec >= 0 ? 0 : count_digit_lli(d);
	badge->prec > 0 && mod == MOD_WP && badge->min_w > badge->prec ? nbr = 0 : 0;
	width = badge->prec >= 0 ? badge->min_w - badge->prec : badge->min_w;
	prec = badge->prec;
	mod == MOD_WP && d < 0  && badge->prec > 0 ? width-- : 0;
	// printf("width = %d\n", width);
	specifier = (mod == MOD_W || mod == MOD_WP) ? width : prec;
	while (specifier > nbr)
	{
		ft_putchar(c);
		specifier--;
	}
}

void	t_type_reset(t_type *type)
{
	type->ll_int = 0;
	type->ull_int = 0;
}

int		count_digit_lli(long long int d)
{
	int	i;

	i = 0;
	if (d == 0)
		i = 1;
	if (d < 0)
	{
		i = 1;
		d *= -1;
	}
	while (d != 0)
	{
		d /= 10;
		i++;
	}
	return (i);
}

int		len_badge_set(t_type *d, t_badge *badge, va_list ap)
{
	long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		d->ll_int = va_arg(ap, long);
		return (num = count_digit_lli(d->ll_int));
	}
	else if (badge->h)
	{
		d->ll_int = va_arg(ap, int);//won't let me specify it as "short"
		return (num = count_digit_lli(d->ll_int));
	}
	else
		d->ll_int = va_arg(ap, int);
	return (num = count_digit_lli(d->ll_int));
}

void	putnbr(long long int d)
{
	if (d < 0)
	{
		ft_putchar('-');
		d = -d;
	}
	if (d >= 10)
	{
		putnbr(d / 10);
		putnbr(d % 10);
	}
	else
		ft_putchar(d + 48);
}
