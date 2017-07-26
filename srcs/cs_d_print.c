/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_d_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:49:42 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Handles if both width and precision fields are specified.
*/

int		cs_lc_d_wp(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		cs_lc_d_prec(type, badge, fmt);
		padding_wp(badge, type, ' ', MOD_WP);
	}
	else if (badge->zero)
	{
		!badge->sign && !badge->space && type->ll_int >= 0 ? 0 : badge->min_w--;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_d_prec(type, badge, fmt);
	}
	else
	{
		badge->prec > count_digit_lli(type) && type->ll_int < 0 ?
			badge->min_w-- : 0;
		badge->sign || badge->space ? badge->min_w-- : 0;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_d_prec(type, badge, fmt);
	}
	return (len);
}

/*
**Handles if the precision field is specified.
*/

int		cs_lc_d_prec(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = count_digit_lli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ll_int == 0 ? 0 : len;
	badge->prec > 0 && badge->prec < len && type->ll_int < 0 ? len-- : 0;
	len += badge->sign || badge->space || type->ll_int < 0 ? 1 : 0;
	if (badge->prec == 0 && type->ll_int == 0)
		f_sign_space(badge, type, MOD_P);
	else if (badge->prec > 0 && type->ll_int == 0)
	{
		f_sign_space(badge, type, MOD_P);
		padding_wp(badge, type, '0', MOD_P);
	}
	else
	{
		f_sign_space(badge, type, MOD_P);
		padding_wp(badge, type, '0', MOD_P);
		putnbr_lli(type->ll_int);
	}
	(*fmt)++;
	return (len);
}

/*
**Handles if only width field is specified.
*/

int		cs_lc_d_width(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		f_sign_space(badge, type, MOD_W);
		putnbr_lli(type->ll_int);
		padding_wp(badge, type, ' ', MOD_W);
	}
	else if (badge->zero)
	{
		f_sign_space(badge, type, MOD_W);
		padding_wp(badge, type, '0', MOD_W);
		putnbr_lli(type->ll_int);
	}
	else
	{
		f_sign_space(badge, type, MOD_ELSE);
		padding_wp(badge, type, ' ', MOD_W);
		f_sign_space(badge, type, MOD_W);
		putnbr_lli(type->ll_int);
	}
	(*fmt)++;
	return (len);
}

/*
**Handles if neither width and precision fields are specified.
*/

int		cs_lc_d_def(t_type *type, t_badge *badge, char **fmt)
{
	int len;

	len = 0;
	if (badge->sign || badge->space)
	{
		badge->space ? ft_putchar(' ') : 0;
		badge->sign && type->ll_int >= 0 ? ft_putchar('+') : 0;
		type->ll_int >= 0 || badge->space ? len++ : 0;
	}
	putnbr_lli(type->ll_int);
	len += count_digit_lli(type);
	(*fmt)++;
	return (len);
}
