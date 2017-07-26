/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_S_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:23:41 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:07:30 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_uc_s_print(char **fmt, t_badge *badge, va_list ap)
{
	wchar_t	*str;
	int		length;
	int		len;

	if ((str = va_arg(ap, wchar_t *)) == NULL)
	{
		ft_putstr("(null)");
		(*fmt)++;
		return (6);
	}
	length = w_strlen(str);
	len = length;
	if (badge->prec >= 0 && badge->min_w > 0 && badge->prec < len)
		len = cs_uc_s_wp(str, badge, length);
	else if (badge->prec >= 0 && badge->prec < length && badge->min_w == 0)
		len = cs_uc_s_p(str, badge, length);
	else if ((badge->prec < 0 || badge->prec > length) && badge->min_w > length)
		len = cs_uc_s_width(str, badge, length);
	else
		w_putstr(str);
	(*fmt)++;
	return (len);
}

int		cs_uc_s_wp(wchar_t *str, t_badge *badge, int len)
{
	int	width;

	width = badge->min_w;
	len = width;
	if (badge->prec == 0)
		cs_uc_s_print_w(width);
	else if (badge->prec < len)
	{
		width = badge->min_w - badge->prec;
		if (badge->jleft)
		{
			badge->min_w = width;
			len = cs_uc_s_p(str, badge, len);
			len += cs_uc_s_width(str, badge, len);
		}
		else
		{
			len = width < 0 ? 0 : width;
			cs_uc_s_print_w(width);
			len += cs_uc_s_p(str, badge, len);
		}
	}
	return (len);
}

int		cs_uc_s_p(wchar_t *str, t_badge *badge, int len)
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

int		cs_uc_s_width(wchar_t *str, t_badge *badge, int len)
{
	int	width;

	width = badge->min_w;
	len = badge->min_w;
	width = badge->prec != 0 ? width - w_strlen(str) : width;
	if (badge->jleft)
	{
		badge->prec != 0 ? w_putstr(str) : 0;
		cs_uc_s_print_w(width);
	}
	else
	{
		cs_uc_s_print_w(width);
		badge->prec != 0 ? w_putstr(str) : 0;
	}
	return (len);
}

void	cs_uc_s_print_w(int width)
{
	while (width > 0)
	{
		ft_putchar(' ');
		width--;
	}
}
