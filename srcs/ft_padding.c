/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:48:50 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/15 18:39:23 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>///REMOVE!!!!!!!!!!!!!!!!!!!!!

void	ft_padding(t_badge *badge, t_type *type, char c, int mod)
{
	int	nbd;
	int	prec;
	int	width;
	int	specifier;
	int	nb;

	nb = type->ll_int;
	nbd = set_number(badge, type, mod);
	if (badge->prec >= 0)
		width = badge->min_w - badge->prec;
	else
		width = badge->min_w;
	prec = badge->prec;
	if (mod == MOD_W || mod == MOD_WP)
		specifier = width;
	else
		specifier = prec;
	while (specifier > nbd)
	{
		ft_putchar(c);
		specifier--;
	}
}

int		set_number(t_badge *badge, t_type *type, int mod)
{
	int	nbd;

	if (mod == MOD_W)
		nbd = count_digit_lli(type);
	if (mod == MOD_P || mod == MOD_WP)
	{
		if (type->ll_int == 0 && badge->prec >= 0)
			nbd = 0;
		else
			nbd = count_digit_lli(type);
	}
	if (mod == MOD_WP)
	{
		if (badge->prec > 0 && (badge->min_w > badge->prec))
			nbd = 0;
	}
	return (nbd);
}



void	t_type_reset(t_type *type)
{
	type->ll_int = 0;
	type->ull_int = 0;
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

int		len_badge_set(t_type *type, t_badge *badge, va_list ap)
{
	long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		type->ll_int = va_arg(ap, long);
		return (num = count_digit_lli(type));
	}
	else if (badge->h)
	{
		type->ll_int = va_arg(ap, int);//won't let me specify it as "short"
		return (num = count_digit_lli(type));
	}
	else
		type->ll_int = va_arg(ap, int);
	return (num = count_digit_lli(type));
}

void	putnbr(long long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
