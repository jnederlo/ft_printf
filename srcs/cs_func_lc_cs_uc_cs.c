/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_func_lc_cs_uc_cs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:43:31 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:41:40 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		g_cs_lc_c(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	if (badge->l)
		len = cs_uc_c_print(fmt, badge, ap);
	else
		len = cs_c_print(fmt, badge, ap);
	return (len);
}

int		g_cs_uc_c(char **fmt, t_badge *badge, va_list ap)
{
	int len;

	len = cs_uc_c_print(fmt, badge, ap);
	return (len);
}

int		g_cs_lc_s(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	if (badge->sign || badge->space || badge->zero || badge->pound)
	{
		(*fmt)++;
		return (0);
	}
	else if (badge->l)
		len = cs_uc_s_print(fmt, badge, ap);
	else
		len = cs_lc_s_print(fmt, badge, ap);
	return (len);
}

int		g_cs_uc_s(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	if (badge->sign || badge->space || badge->zero || badge->pound)
	{
		(*fmt)++;
		return (0);
	}
	else
		len = cs_uc_s_print(fmt, badge, ap);
	return (len);
}
