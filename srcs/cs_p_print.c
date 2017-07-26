/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:42:30 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 12:09:18 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_p_print(char **fmt, t_badge *badge, va_list ap, t_type *type)
{
	int		len;
	char	*str;

	type->ull_int = va_arg(ap, unsigned long long);
	len = count_digit_ulli_base(type, 16) + 2;
	str = base_greater_10_x(type, 16);
	if (badge->min_w > len)
	{
		badge->min_w = badge->min_w - len;
		cs_p_print_w(badge, type);
		(*fmt)++;
		return (badge->min_w + len);
	}
	ft_putstr("0x");
	!type->ull_int ? ft_putchar('0') : ft_putstr(str);
	(*fmt)++;
	free(str);
	return (len);
}

void	cs_p_print_w(t_badge *badge, t_type *type)
{
	int		width;
	char	*str;

	width = badge->min_w;
	str = base_greater_10_x(type, 16);
	if (badge->jleft)
	{
		ft_putstr("0x");
		type->ull_int == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
		cs_p_print_spaces(width);
	}
	else
	{
		cs_p_print_spaces(width);
		ft_putstr("0x");
		type->ull_int == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
	}
	free(str);
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

void	cs_p_print_spaces(int width)
{
	while (width > 0)
	{
		ft_putchar(' ');
		width--;
	}
}
