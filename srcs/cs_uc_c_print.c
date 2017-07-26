/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_C_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/22 15:48:21 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_uc_c_print(char **fmt, t_badge *badge, va_list ap)
{
	wchar_t	wc;
	int		len;

	wc = va_arg(ap, wchar_t);
	len = 0;
	if (badge->min_w > 1)
	{
		len = badge->min_w;
		badge->jleft ? w_putchar(wc) : cs_uc_c_print_w(badge);
		badge->jleft ? cs_uc_c_print_w(badge) : w_putchar(wc);
	}
	else
		w_putchar(wc);
	len += w_charlen(wc);
	(*fmt)++;
	return (len);
}

void	cs_uc_c_print_w(t_badge *badge)
{
	int	width;

	width = badge->min_w;
	while (width > 1)
	{
		ft_putchar(' ');
		width--;
	}
}
