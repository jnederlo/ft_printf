/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:54 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/15 20:42:20 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//REMOVE!!!!!!!!!!!!!!

int		g_cs_lc_d(char **fmt, t_badge *badge, va_list ap)
{
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	t_type_reset(d);
	num = len_badge_set(d, badge, ap);
	reset_flags(badge, d);
	len = len_type(num, badge, d, fmt);
	return (len);
}



int		len_type(int num, t_badge *badge, t_type *type, char **fmt)
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

int		cs_lc_d_wp(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		cs_lc_d_prec(type, badge, fmt);
		ft_padding(badge, type, ' ', MOD_WP);
	}
	else if (badge->zero)
	{
		!badge->sign && !badge->space && type->ll_int >= 0 ? 0 : badge->min_w--;
		ft_padding(badge, type, ' ', MOD_WP);
		cs_lc_d_prec(type, badge, fmt);
	}
	else
	{
		badge->sign || badge->space ? badge->min_w-- : 0;
		ft_padding(badge, type, ' ', MOD_WP);
		cs_lc_d_prec(type, badge, fmt);
	}
	return (len);
}

int		cs_lc_d_width(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		f_sign_space(badge, type, MOD_W);
		putnbr(type->ll_int);
		ft_padding(badge, type, ' ', MOD_W);
	}
	else if (badge->zero)
	{
		f_sign_space(badge, type, MOD_W);
		ft_padding(badge, type, '0', MOD_W);
		putnbr(type->ll_int);
	}
	else
	{
		f_sign_space(badge, type, MOD_ELSE);
		ft_padding(badge, type, ' ', MOD_W);
		f_sign_space(badge, type, MOD_W);
		putnbr(type->ll_int);
	}
	(*fmt)++;
	return (len);
}

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
	putnbr(type->ll_int);
	len += count_digit_lli(type);
	(*fmt)++;
	return (len);
}

int		cs_lc_d_prec(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = count_digit_lli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ll_int == 0 ? 0 : len;
	if (badge->prec == 0 && type->ll_int == 0)
	{
		f_sign_space(badge, type, MOD_P);
		len += badge->sign || badge->space ? 1 : 0;
	}
	else if (badge->prec > 0 && type->ll_int == 0)
	{
		f_sign_space(badge, type, MOD_P);
		ft_padding(badge, type, '0', MOD_P);
		len += badge->sign || badge->space ? 1 : 0;
	}
	else
	{
		len += badge->sign || badge->space || type->ll_int < 0 ? 1 : 0;
		f_sign_space(badge, type, MOD_P);
		ft_padding(badge, type, '0', MOD_P);
		putnbr(type->ll_int);
//		len += badge->prec == 0 ? count_digit_lli(type) : 0;
	}
	(*fmt)++;
	return (len);
}


// int		g_cs_lc_i(char **fmt, t_badge *badge, va_list ap)
// {
// 	(void)fmt;
// 	(void)badge;
// 	(void)ap;
// 	return (0);
// }

int		g_cs_lc_o(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_lc_u(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_lc_x(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_uc_x(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_uc_d(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_uc_o(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_uc_u(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_uc_c(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_lc_c(char **fmt, t_badge *badge, va_list ap)
{
	char c;

	(void)badge;//to silence compile error -Werror
	c = va_arg(ap, int);
	write(1, &c, 1);
	(*fmt)++;
	return (1);
}

int		g_cs_uc_s(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_lc_s(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

int		g_cs_lc_p(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}
