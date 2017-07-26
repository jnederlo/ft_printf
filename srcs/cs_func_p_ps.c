/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_func_p_ps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:44:47 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 13:18:23 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		g_cs_lc_p(char **fmt, t_badge *badge, va_list ap)
{
	int		len;
	t_type	*d;

	d = malloc(sizeof(t_type));
	arg_type_reset_p(d);
	if (badge->sign || badge->space || badge->zero || badge->pound ||
		badge->prec >= 0)
	{
		(*fmt)++;
		return (0);
	}
	len = cs_p_print(fmt, badge, ap, d);
	free(d);
	return (len);
}

int		g_cs_pc_s(char **fmt, t_badge *badge, va_list ap)
{
	int	len;

	(void)ap;
	len = badge->min_w > 0 ? badge->min_w : 1;
	if (badge->sign || badge->pound)
	{
		(*fmt)++;
		return (0);
	}
	badge->jleft ? ft_putchar('%') : 0;
	while (badge->min_w > 1)
	{
		badge->zero ? ft_putchar('0') : ft_putchar(' ');
		badge->min_w--;
	}
	!badge->jleft ? ft_putchar('%') : 0;
	(*fmt)++;
	return (len);
}
