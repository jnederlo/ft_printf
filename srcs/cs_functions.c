/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:54 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/18 21:18:23 by jnederlo         ###   ########.fr       */
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
	arg_type_reset(d);
	num = choose_len(d, badge, ap);
	flag_rules(badge, d);
	len = choose_field(num, badge, d, fmt);
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
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset_u(d);
	num = choose_len_u(d, badge, ap);
	flag_rules_u(badge, d);
	len = choose_field_u(num, badge, d, fmt);
	return (len);
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
	char	c;
	int		len;

	c = va_arg(ap, int);
	len = 1;
	if (badge->min_w > 1)
	{
		len = badge->min_w;
		if (badge->jleft)
		{
			ft_putchar(c);
			while (badge->min_w > 1)
			{
				ft_putchar(' ');
				badge->min_w--;
			}
		}
		else
		{
			while (badge->min_w > 1)
			{
				ft_putchar(' ');
				badge->min_w--;
			}
			ft_putchar(c);
		}
	}
	else
		ft_putchar(c);
	(*fmt)++;
	return (len);
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
	char	*str;
	int		length;
	int		len;

	str = va_arg(ap, char *);
	// if ((str = va_arg(ap, char *)) == NULL)
	// {
	// 	printf("str = NULL\n");
	// 	return (0);
	// }
	if (!str)
	{	
		ft_putstr("(null)");
		(*fmt)++;
		return (6);
	}
	if (badge->sign || badge->space || badge->zero || badge->pound)
	{
		(*fmt)++;
		return (-1);
	}
	length = ft_strlen(str);
	len = length;
	if (badge->prec >= 0 && badge->min_w > 0 && badge->prec < len)
		len = cs_lc_s_wp(str, badge, length);
	else if (badge->prec >= 0 && badge->prec < length && badge->min_w < 0)
		len = cs_lc_s_p(str, badge, length);
	else if ((badge->prec < 0 || badge->prec > length) && badge->min_w > length)
		len = cs_lc_s_width(str, badge, length);
	else
		ft_putstr(str);
	(*fmt)++;
	return (len);
}

int		g_cs_lc_p(char **fmt, t_badge *badge, va_list ap)
{
	(void)fmt;
	(void)badge;
	(void)ap;
	return (0);
}
