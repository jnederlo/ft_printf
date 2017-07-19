/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:48:50 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/18 22:31:11 by jnederlo         ###   ########.fr       */
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
	nbd = set_digit(badge, type, mod);
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
		if (badge->prec > 0 && (badge->min_w > badge->prec))
			nbd = 0;
	}
	return (nbd);
}
