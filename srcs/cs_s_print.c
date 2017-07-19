/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_s_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/18 22:57:16 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_lc_s_print(char **fmt, t_badge *badge, va_list ap)
{
	char	*str;
	int		length;
	int		len;

	if ((str = va_arg(ap, char *)) == NULL)
	{	
		ft_putstr("(null)");
		(*fmt)++;
		return (6);
	}
	length = ft_strlen(str);
	len = length;
	if (badge->prec >= 0 && badge->min_w > 0 && badge->prec < len)
		len = cs_lc_s_wp(str, badge, length);
	else if (badge->prec >= 0 && badge->prec < length && badge->min_w < 0)
		len = cs_lc_s_p(str, badge, length);
	else if ((badge->prec < 0 || badge->prec > length) && badge->min_w > length)
		len = cs_lc_s_width(str, badge, length);
	else
		ft_putstr(str);
	(*fmt)++;
	return (len);
}

/*
**Handles if both width and precision fields are specified.
*/

int		cs_lc_s_wp(char *str, t_badge *badge, int len)
{
	int	width;

	width = badge->min_w;
	len = width;
	if (badge->prec == 0)
		cs_lc_s_print_w(width);
	else if (badge->prec < len)
	{
		width = badge->min_w - badge->prec;
		if (badge->jleft)
		{
			badge->min_w = width;
			len = cs_lc_s_p(str, badge, len);
			len += cs_lc_s_width(str, badge, len);
		}
		else
		{
			len = width < 0 ? 0 : width;
			cs_lc_s_print_w(width);
			len += cs_lc_s_p(str, badge, len);
		}
	}
	return (len);
}

int		cs_lc_s_p(char *str, t_badge *badge, int len)
{
	len = badge->prec;
	if (badge->prec == 0)
		return (len);
	else if (badge->prec > 0)
	{
		while (badge->prec > 0)
		{
			ft_putchar(*str);
			str++;
			badge->prec--;
		}
	}
	return (len);
}

int		cs_lc_s_width(char *str, t_badge *badge, int len)
{
	int	width;

	width = badge->min_w;
	len = badge->min_w;
	width = badge->prec != 0 ? width - ft_strlen(str) : width;
	if (badge->jleft)
	{
		badge->prec != 0 ? ft_putstr(str) : 0;
		cs_lc_s_print_w(width);
	}
	else
	{
		cs_lc_s_print_w(width);
		badge->prec != 0 ? ft_putstr(str) : 0;
	}
	return (len);
}

void	cs_lc_s_print_w(int width)
{
	while (width > 0)
	{
		ft_putchar(' ');
		width--;
	}
}
