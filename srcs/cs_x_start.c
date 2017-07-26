/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_x_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:19:19 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 18:40:52 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		choose_field_x(int num, t_badge *badge, t_type *type, char **fmt)
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
		len += cs_lc_x_def(type, badge, fmt, str);
	else if (width > num && badge->prec > num)
		len += cs_lc_x_wp(type, badge, fmt, str);
	else if (badge->prec > num)
		len += cs_lc_x_prec(type, badge, fmt, str);
	else if (width > num && badge->prec < num)
		len += cs_lc_x_width(type, badge, fmt, str);
	return (len);
}

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

int		nullinator(t_badge *badge, char **fmt, t_type *type)
{
	int			width;

	width = badge->min_w;
	if (width < 1 && badge->prec == 0 && type->ull_int == 0)
	{
		(*fmt)++;
		return (0);
	}
	else if (badge->prec == 0 && type->ull_int == 0)
	{
		while (width > 0)
		{
			ft_putchar(' ');
			width--;
		}
		(*fmt)++;
		return (badge->min_w);
	}
	return (-1);
}
