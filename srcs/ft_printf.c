/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:42 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 13:18:28 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		len;
	t_badge	badge;

	va_start(ap, fmt);
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			badge_reset(&badge);
			len += sub_fmt(&fmt, &badge, ap);
		}
		else
		{
			len += write(1, fmt, 1);
			fmt++;
		}
	}
	va_end(ap);
	return (len);
}

/*
**Resets the variables in t_badge back to default
**upon hitting a format specifier (%).
*/

void	badge_reset(t_badge *badge)
{
	badge->pound = 0;
	badge->jleft = 0;
	badge->zero = 0;
	badge->space = 0;
	badge->sign = 0;
	badge->min_w = 0;
	badge->prec = -1;
	badge->l = '\0';
	badge->ll = '\0';
	badge->h = '\0';
	badge->hh = '\0';
	badge->j = '\0';
	badge->z = '\0';
}
