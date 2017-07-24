/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:54 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/22 18:27:59 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset_o(d);
	num = choose_len_o(d, badge, ap);
	if (badge->sign || badge->space)
	{
		(*fmt)++;
		return (-1);
	}
	flag_rules_o(badge, d);
	len = choose_field_o(num, badge, d, fmt);
	return (len);
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
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset_x(d);
	num = choose_len_x(d, badge, ap);
	if (badge->sign || badge->space)
	{
		(*fmt)++;
		return (-1);
	}
	flag_rules_x(badge, d);
	len = choose_field_x(num, badge, d, fmt);
	return (len);
}

int		g_cs_uc_x(char **fmt, t_badge *badge, va_list ap)
{
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset_X(d);
	num = choose_len_X(d, badge, ap);
	if (badge->sign || badge->space)
	{
		(*fmt)++;
		return (-1);
	}
	flag_rules_X(badge, d);
	len = choose_field_X(num, badge, d, fmt);
	return (len);
}

// int		g_cs_uc_d(char **fmt, t_badge *badge, va_list ap)
// {
// 	(void)fmt;
// 	(void)badge;
// 	(void)ap;
// 	return (0);
// }

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
	int len;

	len = cs_uc_c_print(fmt, badge, ap);
	return (0);
}

int		g_cs_lc_c(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	len = cs_c_print(fmt, badge, ap);
	return (len);
}

int		g_cs_uc_s(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	if (badge->sign || badge->space || badge->zero || badge->pound)
	{
		(*fmt)++;
		return (-1);
	}
	else
		len = cs_uc_s_print(fmt, badge, ap);
	return (len);
}

int		g_cs_lc_s(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	if (badge->sign || badge->space || badge->zero || badge->pound)
	{
		(*fmt)++;
		return (-1);
	}
	else
		len = cs_lc_s_print(fmt, badge, ap);
	return (len);
}

int		g_cs_lc_p(char **fmt, t_badge *badge, va_list ap)
{
	int		len;

	if (badge->sign || badge->space || badge->zero || badge->pound ||
		badge->prec >= 0)
	{
		(*fmt)++;
		return (-1);
	}
	len = cs_p_print(fmt, badge, ap);
	return (len);
}


int		g_cs_pc_s(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	(void)ap;
	len = badge->min_w > 0 ? badge->min_w : 1;
	if (badge->sign || badge->zero || badge->pound)
	{
		(*fmt)++;
		return (-1);
	}
	badge->jleft ? ft_putchar('%') : 0;
	while (badge->min_w > 1)
	{
		ft_putchar(' ');
		badge->min_w--;
	}
	!badge->jleft ? ft_putchar('%') : 0;
	(*fmt)++;
	return (len);
}
