/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_u_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:05:13 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_lc_u_wp(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		cs_lc_u_prec(type, badge, fmt);
		padding_wp(badge, type, ' ', MOD_WP);
	}
	else if (badge->zero)
	{
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_u_prec(type, badge, fmt);
	}
	else
	{
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_u_prec(type, badge, fmt);
	}
	return (len);
}

int		cs_lc_u_prec(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = count_digit_ulli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ull_int == 0 ? 0 : len;
	if (badge->prec == 0 && type->ull_int == 0)
		len += badge->sign || badge->space ? 1 : 0;
	else if (badge->prec > 0 && type->ull_int == 0)
	{
		padding_wp(badge, type, '0', MOD_P);
		len += badge->sign || badge->space ? 1 : 0;
	}
	else
	{
		padding_wp(badge, type, '0', MOD_P);
		putnbr_ulli(type->ull_int);
	}
	(*fmt)++;
	return (len);
}

int		cs_lc_u_width(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		putnbr_ulli(type->ull_int);
		padding_wp(badge, type, ' ', MOD_W);
	}
	else if (badge->zero)
	{
		padding_wp(badge, type, '0', MOD_W);
		putnbr_ulli(type->ull_int);
	}
	else
	{
		padding_wp(badge, type, ' ', MOD_W);
		putnbr_ulli(type->ull_int);
	}
	(*fmt)++;
	return (len);
}

int		cs_lc_u_def(t_type *type, t_badge *badge, char **fmt)
{
	int len;

	len = 0;
	(void)badge;
	putnbr_ulli(type->ull_int);
	len += count_digit_ulli(type);
	(*fmt)++;
	return (len);
}
