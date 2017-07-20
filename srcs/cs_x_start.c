/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_x_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:19:19 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/19 16:35:20 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Determines if there is a width field, precision field, both width and
**precision field, or no field, and then sends to appropriate function.
*/

int		choose_field_x(int num, t_badge *badge, t_type *type, char **fmt)
{
	int			len;

	len = 0;
	if (badge->min_w > badge->prec && badge->min_w > num && badge->prec > num)
		len += cs_lc_x_wp(type, badge, fmt);
	else if (badge->prec >= 0 && badge->prec > num)
	{
//		len += badge->prec == 0 && type->ull_int < 0 ? -1 : 0;
		len += cs_lc_x_prec(type, badge, fmt);
		num += badge->prec;
	}
	if (badge->min_w > num && badge->prec < num)
		len += cs_lc_x_width(type, badge, fmt);
	if (badge->min_w < 0 && badge->prec < 0)
		len += cs_lc_x_def(type, badge, fmt);
	else if (badge->min_w < num)
		len += cs_lc_x_def(type, badge, fmt);
	return (len);
}

/*
**Determines what 'type' va_arg is: long long, long, int, short, etc.
*/

int		choose_len_x(t_type *type, t_badge *badge, va_list ap)
{
	unsigned long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		type->ull_int = va_arg(ap, unsigned long);
		return (num = count_digit_ulli(type));
	}
	else if (badge->h)
	{
		type->ull_int = va_arg(ap, unsigned int);//won't let me specify it as "short"
		return (num = count_digit_ulli(type));
	}
	else
		type->ull_int = va_arg(ap, unsigned int);
	return (num = count_digit_ulli(type));
}

void	flag_rules_x(t_badge *badge, t_type *type)
{
	long long	nb;

	nb = type->ull_int;
	if (badge->jleft)
		badge->zero = 0;
	if (badge->sign || nb < 0)
		badge->space = 0;
}

void	arg_type_reset_x(t_type *type)
{
	type->ll_int = 0;
	type->ull_int = 0;
}
