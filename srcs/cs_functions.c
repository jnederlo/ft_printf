/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:54 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/13 17:10:03 by jnederlo         ###   ########.fr       */
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

void	reset_flags(t_badge *badge, t_type *d)
{
	if (badge->jleft)
		badge->zero = 0;
	if (badge->sign || d->ll_int < 0)
		badge->space = 0;
}

int		len_type(int num, t_badge *badge, t_type *d, char **fmt)
{
	int			len;
	long long	nbr;

	len = 0;
	nbr = d->ll_int;
	if (badge->pound)
		return (-1);
	if (badge->min_w > badge->prec && badge->min_w > num && badge->prec >= 0)
		len += cs_lc_d_wp(nbr, badge, fmt);
	else if (badge->prec >= 0)
	{
		len += cs_lc_d_prec(nbr, badge, fmt);//calls -> flags() calls -> print()
		num += badge->prec;
	}
	if (badge->min_w > num && badge->prec < 0)
		len += cs_lc_d_width(nbr, badge, fmt);//calls -> flags() calls -> print()
	if (badge->min_w < 0 && badge->prec < 0)
		len += cs_lc_d_def(nbr, badge, fmt);//calls -> print()
	return (len);
}

int		cs_lc_d_wp(long long int d, t_badge *badge, char **fmt)
{
	int	len;

	//badge->min_w -= badge->prec;
	// cs_lc_d_prec(d, badge, fmt);
	len = badge->min_w;
	if (badge->jleft)
	{
		cs_lc_d_prec(d, badge, fmt);
		badge->sign && d >= 0 ? ft_putchar('+') : 0;
		badge->space ? ft_putchar(' ') : 0;//means sign is 0 b/c of reset.
		badge->sign || badge->space ? badge->min_w-- : 0;
		ft_padding(badge, d, ' ', MOD_WP);
	}
	else if (badge->zero)
	{
		badge->sign && d >= 0 ? ft_putchar('+') : 0;
		d < 0 ? ft_putchar('-') : 0;
		badge->space ? ft_putchar(' ') : 0;//means sign is 0 b/c of reset.
		badge->space || (badge->sign && d >= 0) ? badge->min_w-- : 0;
		ft_padding(badge, d, '0', MOD_WP);
		cs_lc_d_prec(d, badge, fmt);
	}
	else
	{
		badge->sign && d >= 0 ? badge->min_w-- : 0;
		ft_padding(badge, d, ' ', MOD_WP);
		badge->sign && d >= 0 ? ft_putchar('+') : 0;
		cs_lc_d_prec(d, badge, fmt);
	}
	return (len);
}

int		cs_lc_d_width(long long int d, t_badge *badge, char **fmt)
{
	int	len;
	len = badge->min_w;
	if (badge->jleft)
	{
		badge->sign && d >= 0 ? ft_putchar('+') : 0;
		badge->space ? ft_putchar(' ') : 0;//means sign is 0 b/c of reset.
		(badge->sign && d >= 0) || badge->space ? badge->min_w-- : 0;
		putnbr(d);
		ft_padding(badge, d, ' ', MOD_W);
	}
	else if (badge->zero)
	{
		badge->sign && d >= 0 ? ft_putchar('+') : 0;
		d < 0 ? ft_putchar('-') : 0;
		badge->space ? ft_putchar(' ') : 0;//means sign is 0 b/c of reset.
		badge->space || (badge->sign && d >= 0) ? badge->min_w-- : 0;
		ft_padding(badge, d, '0', MOD_W);
		d < 0 ? putnbr(-d) : putnbr(d);//will need to handle special cases for sizes in putnbr.
	}
	else
	{
		badge->sign && d >= 0 ? badge->min_w-- : 0;
		ft_padding(badge, d, ' ', MOD_W);
		badge->sign && d >= 0 ? ft_putchar('+') : 0;
		putnbr(d);
	}
	(*fmt)++;
	return (len);
}

int		cs_lc_d_def(long long int d, t_badge *badge, char **fmt)
{
	int len;

	len = 0;
	if (badge->sign || badge->space)
	{
		badge->space ? ft_putchar(' ') : 0;
		badge->sign && d >= 0 ? ft_putchar('+') : 0;
		d >= 0 || badge->space ? len++ : 0;
	}
	putnbr(d);
	len += count_digit_lli(d);
	(*fmt)++;
	return (len);
}

int		cs_lc_d_prec(long long int d, t_badge *badge, char **fmt)
{
	int	len;

	len = badge->prec;
	// printf("PRECISION = %d\n", badge->prec);
	if ((badge->space || badge->sign) && d > 0 && badge->prec >= 0)
	{
		badge->space ? ft_putchar(' ') : ft_putchar('+');
		len++;
	}
	if (badge->prec > 0 && d < 0)
	{
		ft_putchar('-');
		d *= -1;
		len++;
	}
	if (len != 0)
	{
		ft_padding(badge, d, '0', MOD_P);
		putnbr(d);
	}
	else
	{
		d == 0 ? 0 : putnbr(d);
		d != 0 ? len += count_digit_lli(d) : 0;
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
