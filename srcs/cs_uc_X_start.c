/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_X_start.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:19:19 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/19 21:24:40 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Determines if there is a width field, precision field, both width and
**precision field, or no field, and then sends to appropriate function.
*/

int		choose_field_X(int num, t_badge *badge, t_type *type, char **fmt)
{
	int			len;
	int			width;

	width = badge->min_w;
	if ((len = nullinator_X(badge, fmt, type)) >= 0)
		return (len);
	len = 0;
	if (width < num && badge->prec < num)
		len += cs_uc_X_def(type, badge, fmt);
	else if (width > num && badge->prec > num)
		len += cs_uc_X_wp(type, badge, fmt);
	else if (badge->prec > num)
	{
//		len += badge->prec == 0 && type->ull_int < 0 ? -1 : 0;
		len += cs_uc_X_prec(type, badge, fmt);
//		num += badge->prec;
	}
	else if (width > num && badge->prec < num)
		len += cs_uc_X_width(type, badge, fmt);
	return (len);
}

/*
**Determines what 'type' va_arg is: long long, long, int, short, etc.
*/

int		choose_len_X(t_type *type, t_badge *badge, va_list ap)
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

void	flag_rules_X(t_badge *badge, t_type *type)
{
	long long	nb;

	nb = type->ull_int;
	if (badge->jleft)
		badge->zero = 0;
	if (badge->sign || nb < 0)
		badge->space = 0;
}

void	arg_type_reset_X(t_type *type)
{
	type->ll_int = 0;
	type->ull_int = 0;
}
	
int		nullinator_X(t_badge *badge, char **fmt, t_type *type)
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
