/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_S_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:23:41 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/21 17:52:28 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"
#include <stdio.h>

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
	length = w_strlen(str);//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	len = length;
	if (badge->prec >= 0 && badge->min_w > 0 && badge->prec < len)
		len = cs_uc_s_wp(str, badge, length);
	else if (badge->prec >= 0 && badge->prec < length && badge->min_w < 0)
		len = cs_uc_s_p(str, badge, length);
	else if ((badge->prec < 0 || badge->prec > length) && badge->min_w > length)
		len = cs_uc_s_width(str, badge, length);
	else
		w_putstr(str);//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	(*fmt)++;
	return (len);
}

/*
**Handles if both width and precision fields are specified.
*/

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
	width = badge->prec != 0 ? width - w_strlen(str) : width;//!!!!!!!!!!!!!!!!
	if (badge->jleft)
	{
		badge->prec != 0 ? w_putstr(str) : 0;//!!!!!!!!!!!!!!!!!!!!!!!!!
		cs_uc_s_print_w(width);
	}
	else
	{
		cs_uc_s_print_w(width);
		badge->prec != 0 ? w_putstr(str) : 0;//!!!!!!!!!!!!!!!!!!!!
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

int		w_strlen(wchar_t *w_str)
{
	int	len;

	len = 0;
	if (!w_str)
		return (ft_strlen("(null)"));
	while (*w_str)
	{
		len += w_charlen(*w_str);
		w_str++;
	}
	return (len);
}

int		w_charlen(wchar_t wc)
{
	if ((unsigned int)wc < ONE_BYTE)
		return (1);
	else if((unsigned int)wc < TWO_BYTE)
		return (2);
	else if((unsigned int)wc < THREE_BYTE)
		return (3);
	else
		return (4);
}


int		w_putstr(wchar_t *ws)
{
	int len;

	if (!ws)
		return (ft_printf("(null)"));
	len = 0;
	while (*ws)
	{
		len += w_putchar(*ws);
		ws++;
	}
	return (len);
}

int		w_putchar(wchar_t wc)
{
	if ((unsigned int)wc < ONE_BYTE)
		return (w_putchar_one(wc));
	else if ((unsigned int)wc < TWO_BYTE)
		return (w_putchar_two(wc));
	else if((unsigned int)wc < THREE_BYTE)
		return (w_putchar_three(wc));
	else
		return (w_putchar_four(wc));
}

int		w_putchar_one(wchar_t wc)
{
	ft_putchar((unsigned int)wc);
	return (1);
}

int		w_putchar_two(wchar_t wc)
{
	unsigned long	temp1;
	unsigned long	temp2;
	
	temp1 = wc | 0;
	temp2 = wc | 0;
	temp2 = ((temp2 << 26) >> 26);
	temp1 = temp1 >> 6;
	ft_putchar(temp1 | 192);
	ft_putchar(temp2 | 128);
	return (2);
}

int		w_putchar_three(wchar_t wc)
{
	unsigned long	temp1;
	unsigned long	temp2;
	unsigned long	temp3;

	temp1 = wc | 0;
	temp2 = wc | 0;
	temp3 = wc | 0;
	temp3 = ((temp3 << 26) >> 26);
	temp2 = ((temp2 << 20) >> 26);
	temp1 = temp1 >> 12;
	ft_putchar(temp1 | 224);
	ft_putchar(temp2 | 128);
	ft_putchar(temp3 | 128);
	return (3);
}

int		w_putchar_four(wchar_t wc)
{
	unsigned long	temp1;
	unsigned long	temp2;
	unsigned long	temp3;
	unsigned long	temp4;

	temp1 = wc | 0;
	temp2 = wc | 0;
	temp3 = wc | 0;
	temp4 = wc | 0;
	temp4 = ((temp4 << 26) >> 26);
	temp3 = ((temp3 << 20) >> 26);
	temp2 = ((temp2 << 14) >> 26);
	temp1 = temp1 >> 18;
	ft_putchar(temp1 | 240);
	ft_putchar(temp2 | 128);
	ft_putchar(temp3 | 128);
	ft_putchar(temp4 | 128);
	return (4);
}
