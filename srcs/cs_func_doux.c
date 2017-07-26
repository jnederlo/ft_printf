/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_func_doux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:41:49 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 11:47:52 by jnederlo         ###   ########.fr       */
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
	free(d);
	return (len);
}

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
		return (0);
	}
	flag_rules_o(badge, d);
	len = choose_field_o(num, badge, d, fmt);
	free(d);
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
	free(d);
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
		return (0);
	}
	flag_rules_x(badge, d);
	len = choose_field_x(num, badge, d, fmt);
	free(d);
	return (len);
}
