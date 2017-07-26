/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_d_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:19:19 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:42:13 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Determines if there is a width field, precision field, both width and
**precision field, or no field, and then sends to appropriate function.
*/

int		choose_field(int num, t_badge *badge, t_type *type, char **fmt)
{
	int			len;

	len = 0;
	if (badge->pound)
		return (0);
	badge->min_w < 0 ? badge->jleft = 1 : 0;
	badge->min_w = badge->min_w < 0 ? badge->min_w * -1 : badge->min_w;
	if (badge->min_w > badge->prec && badge->min_w > num && badge->prec >= 0)
		len += cs_lc_d_wp(type, badge, fmt);
	else if (badge->prec >= 0)
	{
		len += badge->prec == 0 && type->ll_int < 0 ? -1 : 0;
		len += cs_lc_d_prec(type, badge, fmt);
		num += badge->prec;
	}
	if (badge->min_w > num && badge->prec < 0)
		len += cs_lc_d_width(type, badge, fmt);
	else if (badge->prec < 0)
		len += cs_lc_d_def(type, badge, fmt);
	return (len);
}

/*
**Determines what 'type' va_arg is: long long, long, int, short, etc.
*/

int		choose_len(t_type *type, t_badge *badge, va_list ap)
{
	long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		type->ll_int = va_arg(ap, long long);
		return (num = count_digit_lli(type));
	}
	else if (badge->h)
	{
		type->ll_int = va_arg(ap, int);
		edge_cases_d(type, badge);
		return (num = count_digit_lli(type));
	}
	else
	{
		type->ll_int = va_arg(ap, int);
		edge_cases_d(type, badge);
	}
	return (num = count_digit_lli(type));
}

void	flag_rules(t_badge *badge, t_type *type)
{
	long long	nb;

	nb = type->ll_int;
	if (badge->jleft)
		badge->zero = 0;
	if (badge->sign || nb < 0)
		badge->space = 0;
}

void	arg_type_reset(t_type *type)
{
	type->ll_int = 0;
	type->ull_int = 0;
}

void	edge_cases_d(t_type *type, t_badge *badge)
{
	long long	n;

	n = type->ll_int;
	if (badge->h)
	{
		if (type->ll_int == 32768)
			type->ll_int = MIN_SINT;
		else if (type->ll_int >= 0)
			type->ll_int = n / 32769 % 2 ?
				n % 32769 + 32769 : n % 32769;
		else
			type->ll_int = n / 32769 % 2 ?
				n % 32769 - 32769 : n % 32769;
	}
	else if (badge->hh)
	{
		if (type->ll_int == -128)
			type->ll_int = MIN_CHAR;
		else if (type->ll_int >= 0)
			type->ll_int = n / 128 % 2 ? n % 128 - 128 : n % 128;
		else
			type->ll_int = n / 128 % 2 ? n % 128 + 128 : n % 128;
	}
}
