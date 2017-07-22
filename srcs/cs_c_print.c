/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_c_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/21 20:30:46 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_c_print(char **fmt, t_badge *badge, va_list ap)
{
	char	c;
	int		len;

	c = va_arg(ap, int);
	len = 1;
	if (badge->min_w > 1)
	{
		len = badge->min_w;
		badge->jleft ? ft_putchar(c) : cs_c_print_w(badge);
		badge->jleft ? cs_c_print_w(badge) : ft_putchar(c);
	}
	else
		ft_putchar(c);
	(*fmt)++;
	return (len);
}

void	cs_c_print_w(t_badge *badge)
{
	int	width;

	width = badge->min_w;
	while (width > 1)
	{
		ft_putchar(' ');
		width--;
	}
}
