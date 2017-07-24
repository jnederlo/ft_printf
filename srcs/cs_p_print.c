/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:42:30 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/24 14:13:25 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cs_p_print(char **fmt, t_badge *badge, va_list ap)
{
	int					len;
	long long			addr;

	addr = va_arg(ap, long long);
	len = count_digit_li_base(addr, 16) + 2;
	if (badge->min_w > len)
	{
		badge->min_w = badge->min_w - len;
		cs_p_print_w(badge, addr);
		(*fmt)++;
		return (badge->min_w + len);
	}
	ft_putstr("0x");
	!addr ? ft_putchar('0') : ft_putstr(base_greater_10_x(addr, 16));
	(*fmt)++;
	return (len);
}

void	cs_p_print_w(t_badge *badge, long long addr)
{
	int	width;

	width = badge->min_w;
	if (badge->jleft)
	{
		ft_putstr("0x");
		addr == 0 ? ft_putchar('0') : 0;
		ft_putstr(base_greater_10_x(addr, 16));
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
		addr == 0 ? ft_putchar('0') : 0;
		ft_putstr(base_greater_10_x(addr, 16));
	}
}

int	count_digit_li_base(long long addr, int base)
{
	int		i;

	i = 0;
	if (!addr)
		return (1);
	if (addr < 0)
		i++;
	while (addr)
	{
		addr /= base;
		i++;
	}
	return (i);
}
