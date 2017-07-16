/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_d_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:19:19 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/16 13:47:26 by jnederlo         ###   ########.fr       */
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
		return (-1);
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
	if (badge->min_w < 0 && badge->prec < 0)
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
