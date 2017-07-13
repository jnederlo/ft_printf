/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:48:50 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/12 18:00:19 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>///REMOVE!!!!!!!!!!!!!!!!!!!!!

void	ft_padding(t_badge *badge, long long d, char c)
{
	int	nbr;
	int	i;

	nbr = count_digit_lli(d);
	i = badge->min_w;
	// printf("\n\n	nbr = %d\n", nbr);
	// printf("	min_w = %d\n", i);
	// printf("	char c = %c\n", c);

	while (i > nbr)
	{
		ft_putchar(c);
		i--;
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
