/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_u_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:19:19 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/24 17:38:43 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Determines if there is a width field, precision field, both width and
**precision field, or no field, and then sends to appropriate function.
*/

int		choose_field_u(int num, t_badge *badge, t_type *type, char **fmt)
{
	int			len;

	len = 0;
	if (badge->pound)
		return (0);
	badge->min_w < 0 ? badge->jleft = 1 : 0;
	badge->min_w = badge->min_w < 0 ? badge->min_w * -1 : badge->min_w;
	if (badge->min_w > badge->prec && badge->min_w > num && badge->prec >= 0)
		len += cs_lc_u_wp(type, badge, fmt);
	else if (badge->prec >= 0)
	{
		len += cs_lc_u_prec(type, badge, fmt);
		num += badge->prec;
	}
	if (badge->min_w > num && badge->prec < 0)
		len += cs_lc_u_width(type, badge, fmt);
	else if (badge->prec < 0)
		len += cs_lc_u_def(type, badge, fmt);
	return (len);
}

/*
**Determines what 'type' va_arg is: long long, long, int, short, etc.
*/

int		choose_len_u(t_type *type, t_badge *badge, va_list ap)
{
	unsigned long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		type->ull_int = va_arg(ap, unsigned long long);
		return (num = count_digit_ulli(type));
	}
	else if (badge->h)
	{
		type->ull_int = va_arg(ap, unsigned);
		return (num = count_digit_ulli(type));
	}
	else
	{
		type->ull_int = va_arg(ap, unsigned);
		badge->hh ? type->ull_int = type->ull_int % 256 : 0;
	}
	return (num = count_digit_ulli(type));
}

void	flag_rules_u(t_badge *badge, t_type *type)
{
	long long	nb;

	nb = type->ull_int;
	if (badge->jleft)
		badge->zero = 0;
	if (badge->sign || nb < 0)
		badge->space = 0;
}

void	arg_type_reset_u(t_type *type)
{
	type->ll_int = 0;
	type->ull_int = 0;
}
