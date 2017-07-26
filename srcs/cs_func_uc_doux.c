/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_func_uc_doux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:54 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 11:48:56 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		g_cs_uc_d(char **fmt, t_badge *badge, va_list ap)
{
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset(d);
	num = choose_len_uc_d(d, badge, ap);
	flag_rules(badge, d);
	len = choose_field(num, badge, d, fmt);
	free(d);
	return (len);
}

int		g_cs_uc_o(char **fmt, t_badge *badge, va_list ap)
{
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset_o(d);
	num = choose_len_uc_uo(d, badge, ap);
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

int		g_cs_uc_u(char **fmt, t_badge *badge, va_list ap)
{
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset_u(d);
	num = choose_len_uc_uo(d, badge, ap);
	flag_rules_u(badge, d);
	len = choose_field_u(num, badge, d, fmt);
	free(d);
	return (len);
}

int		g_cs_uc_x(char **fmt, t_badge *badge, va_list ap)
{
	t_type	*d;
	int		len;
	int		num;

	num = 0;
	d = malloc(sizeof(t_type));
	arg_type_reset_x(d);
	num = choose_len_uc_x(d, badge, ap);
	if (badge->sign || badge->space)
	{
		(*fmt)++;
		return (0);
	}
	flag_rules_x(badge, d);
	len = choose_field_uc_x(num, badge, d, fmt);
	free(d);
	return (len);
}
