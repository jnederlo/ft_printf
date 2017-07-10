/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:54 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/09 19:25:01 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//REMOVE!!!!!!!!!!!!!!


int		g_cs_lc_d(char **fmt, t_badge *badge, va_list ap)
{
	int	d;
	int	len;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		d = va_arg(ap, long);
		if (badge->min_w && (badge->min_w > ft_count_digits(d)))
			len = gen_width(d, badge, fmt);//calls -> flags() calls -> print()
		else if (badge->prec && (badge->prec > ft_count_digits(d)))
			len = some_prec(d, badge, fmt);//calls -> flags() calls -> print()
		else
			len = generic_d(d, badge, fmt);//calls -> print()
	}
	else if (badge->hh)
	{
		d = va_arg(ap, int);//won't let me specify it as "short"
		if (badge->min_w && (badge->min_w > ft_count_digits(d)))
			len = gen_width(d, badge, fmt);//calls -> flags() calls -> print()
		else if (badge->prec && (badge->prec > ft_count_digits(d)))
			len = some_prec(d, badge, fmt);//calls -> flags() calls -> print()
		else
			len = generic_d(d, badge, fmt);//calls -> print()
	}
	else
	{
		d = va_arg(ap, int);
		if (badge->min_w && (badge->min_w > ft_count_digits(d)))
			len = gen_width(d, badge, fmt);//calls -> flags() calls -> print()
		else if (badge->prec && (badge->prec > ft_count_digits(d)))
			len = some_prec(d, badge, fmt);//calls -> flags() calls -> print()
		else
			len = generic_d(d, badge, fmt);//calls -> print()
	}
	return (len);
}

int		gen_width(int d, t_badge *badge, char **fmt)
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
		c == ' ' ? ft_putnbr(d) : ft_padding(badge, d, c);
		c == '0' ? ft_putnbr(d) : ft_padding(badge, d, c);
	}
	else
	{
		ft_padding(badge, d, ' ');
		ft_putnbr(d);
	}
	(*fmt)++;
	return (badge->min_w);
}

int		generic_d(int d, t_badge *badge, char **fmt)
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
	ft_putnbr(d);
	len += ft_count_digits(d);
	(*fmt)++;
	return (len);
}

int		some_prec(int d,t_badge *badge, char** fmt)
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
