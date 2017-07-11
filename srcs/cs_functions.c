/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:54 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/10 17:21:02 by jnederlo         ###   ########.fr       */
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
	len = len_type(num, badge, d, fmt);
	return (len);
}

int		len_type(int num, t_badge *badge, t_type *d, char **fmt)
{
	int			len;
	long long	nbr;

	nbr = d->ll_int;
	if (badge->min_w && (badge->min_w > num))
		len = gen_width(nbr, badge, fmt);//calls -> flags() calls -> print()
	else if (badge->prec && (badge->prec > num))
		len = some_prec(nbr, badge, fmt);//calls -> flags() calls -> print()
	else
		len = generic_d(nbr, badge, fmt);//calls -> print()
	return (len);
}

int		gen_width(long long int d, t_badge *badge, char **fmt)
{
	char	c;

	if (badge->pound || (badge->jleft && badge->zero) ||
		(badge->sign && badge->space))
		return (-1);
	if (badge->sign)
		d >= 0 ? ft_putchar('+') : 0;
	if (badge->space && d >= 0)
		ft_putchar(' ');
	if (badge->jleft || badge->zero)
	{
		c = badge->jleft ? ' ' : '0';
		c == ' ' ? putnbr(d) : ft_padding(badge, d, c);
		c == '0' && d < 0 ? putnbr(-d) : 0;
		c == '0' && d >= 0 ? putnbr(d) : 0;
		c == '0' ? 0 : ft_padding(badge, d, c);
	}
	else
	{
		ft_padding(badge, d, ' ');
		putnbr(d);
	}
	(*fmt)++;
	return (badge->min_w);
}

int		generic_d(long long int d, t_badge *badge, char **fmt)
{
	int len;

	len = 0;
	if (badge->pound || (badge->jleft && badge->zero) ||
		(badge->sign && badge->space))
		return (-1);
	if (badge->sign)
	{
		d >= 0 ? ft_putchar('+') : 0;
		len++;
	}
	if (badge->space && d >= 0)
	{
		ft_putchar(' ');
		len++;
	}
	putnbr(d);
	len += count_digit_lli(d);
	(*fmt)++;
	return (len);
}

int		some_prec(long long int d, t_badge *badge, char** fmt)
{
	(void)d;
	(void)badge;
	(void)fmt;
	return (0);
}


int		g_cs_lc_i(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}

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
