/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:42:30 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 18:33:35 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_p_print(char **fmt, t_badge *badge, va_list ap, t_type *type)
{
	int			len;

	type->ull_int = va_arg(ap, unsigned long long);
	len = count_digit_ulli_base(type, 16) + 2;
	if (badge->min_w > len)
	{
		badge->min_w = badge->min_w - len;
		cs_p_print_w(badge, type);
		(*fmt)++;
		return (badge->min_w + len);
	}
	ft_putstr("0x");
	!type->ull_int ? ft_putchar('0') : ft_putstr(base_greater_10_x(type, 16));
	(*fmt)++;
	return (len);
}

void	cs_p_print_w(t_badge *badge, t_type *type)
{
	int	width;

	width = badge->min_w;
	if (badge->jleft)
	{
		ft_putstr("0x");
		type->ull_int == 0 ? ft_putchar('0') : 0;
		ft_putstr(base_greater_10_x(type, 16));
		while (width > 0)
		{
			ft_putchar(' ');
			width--;
		}
	}
	else
	{
		while (width > 0)
		{
			ft_putchar(' ');
			width--;
		}
		ft_putstr("0x");
		type->ull_int == 0 ? ft_putchar('0') : 0;
		ft_putstr(base_greater_10_x(type, 16));
	}
}

int		count_digit_ulli_base(t_type *type, int base)
{
	int					i;
	unsigned long long	addr;

	addr = type->ull_int;
	i = 0;
	if (!addr)
		return (1);
	while (addr)
	{
		addr /= base;
		i++;
	}
	return (i);
}

void	arg_type_reset_p(t_type *type)
{
	type->ll_int = 0;
	type->ull_int = 0;
}
