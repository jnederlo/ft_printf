/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:48:50 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/24 15:25:42 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Adds the padding if the width and/or precision fields are specified.
*/

void	padding_wp(t_badge *badge, t_type *type, char c, int mod)
{
	int	nbd;
	int	prec;
	int	width;
	int	specifier;
	int	nb;

	nb = type->ll_int ? type->ll_int : type->ull_int;
	nbd = mod == MOD_W_X ? 0 : set_digit(badge, type, mod);
	mod == MOD_P_X ? nbd = 0 : 0;
	if (badge->prec >= 0 && mod != MOD_W_X)
		width = badge->min_w - badge->prec;
	else
		width = badge->min_w;
	prec = badge->prec;
	if (mod == MOD_W || mod == MOD_WP || mod == MOD_W_X)
		specifier = width;
	else
		specifier = prec;
	while (specifier > nbd)
	{
		ft_putchar(c);
		specifier--;
	}
}

int		set_digit(t_badge *badge, t_type *type, int mod)
{
	int					nbd;
	unsigned long long	value;
	int					(*count_digit) (t_type *);

	value = type->ll_int ? type->ll_int : type->ull_int;
	count_digit = type->ll_int ? &count_digit_lli : &count_digit_ulli;
	if (mod == MOD_W)
		nbd = count_digit(type);
	if (mod == MOD_P || mod == MOD_WP)
	{
		if (value == 0 && badge->prec >= 0)
			nbd = 0;
		else
			nbd = count_digit(type);
	}
	if (mod == MOD_WP)
	{
		if (badge->prec > 0 && badge->prec > nbd && badge->min_w > badge->prec)
			nbd = 0;
		else if (badge->prec > 0 && badge->min_w > badge->prec)
			nbd = nbd - badge->prec;
	}
	return (nbd);
}
