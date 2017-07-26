/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_x_start.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:19:19 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:58:24 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		choose_field_uc_x(int num, t_badge *badge, t_type *type, char **fmt)
{
	int		len;
	int		width;
	char	*str;

	str = NULL;
	width = badge->min_w;
	if ((len = nullinator(badge, fmt, type)) >= 0)
		return (len);
	len = 0;
	if (width < num && badge->prec < num)
		len += cs_uc_x_def(type, badge, fmt, str);
	else if (width > num && badge->prec > num)
		len += cs_uc_x_wp(type, badge, fmt, str);
	else if (badge->prec > num)
		len += cs_uc_x_prec(type, badge, fmt, str);
	else if (width > num && badge->prec < num)
		len += cs_uc_x_width(type, badge, fmt, str);
	return (len);
}

int		choose_len_uc_x(t_type *type, t_badge *badge, va_list ap)
{
	unsigned long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		type->ull_int = va_arg(ap, unsigned long);
		return (num = count_digit_ulli(type));
	}
	else if (badge->h)
	{
		type->ull_int = va_arg(ap, unsigned int);
		return (num = count_digit_ulli(type));
	}
	else
	{
		type->ull_int = va_arg(ap, unsigned int);
		badge->hh ? type->ull_int = type->ull_int % 256 : 0;
	}
	return (num = count_digit_ulli(type));
}
