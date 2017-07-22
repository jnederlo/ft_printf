/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_C_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/21 21:11:34 by jnederlo         ###   ########.fr       */
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

// int		w_charlen(wchar_t wc)
// {
// 	if ((unsigned int)wc < ONE_BYTE)
// 		return (1);
// 	else if((unsigned int)wc < TWO_BYTE)
// 		return (2);
// 	else if((unsigned int)wc < THREE_BYTE)
// 		return (3);
// 	else
// 		return (4);
// }

// int		w_putchar(wchar_t wc)
// {
// 	if ((unsigned int)wc < ONE_BYTE)
// 		return (w_putchar_one(wc));
// 	else if ((unsigned int)wc < TWO_BYTE)
// 		return (w_putchar_two(wc));
// 	else if((unsigned int)wc < THREE_BYTE)
// 		return (w_putchar_three(wc));
// 	else
// 		return (w_putchar_four(wc));
// }

// int		w_putchar_one(wchar_t wc)
// {
// 	ft_putchar((unsigned int)wc);
// 	return (1);
// }

// int		w_putchar_two(wchar_t wc)
// {
// 	unsigned long	temp1;
// 	unsigned long	temp2;
	
// 	temp1 = wc | 0;
// 	temp2 = wc | 0;
// 	temp2 = ((temp2 << 26) >> 26);
// 	temp1 = temp1 >> 6;
// 	ft_putchar(temp1 | 192);
// 	ft_putchar(temp2 | 128);
// 	return (2);
// }

// int		w_putchar_three(wchar_t wc)
// {
// 	unsigned long	temp1;
// 	unsigned long	temp2;
// 	unsigned long	temp3;

// 	temp1 = wc | 0;
// 	temp2 = wc | 0;
// 	temp3 = wc | 0;
// 	temp3 = ((temp3 << 26) >> 26);
// 	temp2 = ((temp2 << 20) >> 26);
// 	temp1 = temp1 >> 12;
// 	ft_putchar(temp1 | 224);
// 	ft_putchar(temp2 | 128);
// 	ft_putchar(temp3 | 128);
// 	return (3);
// }

// int		w_putchar_four(wchar_t wc)
// {
// 	unsigned long	temp1;
// 	unsigned long	temp2;
// 	unsigned long	temp3;
// 	unsigned long	temp4;

// 	temp1 = wc | 0;
// 	temp2 = wc | 0;
// 	temp3 = wc | 0;
// 	temp4 = wc | 0;
// 	temp4 = ((temp4 << 26) >> 26);
// 	temp3 = ((temp3 << 20) >> 26);
// 	temp2 = ((temp2 << 14) >> 26);
// 	temp1 = temp1 >> 18;
// 	ft_putchar(temp1 | 240);
// 	ft_putchar(temp2 | 128);
// 	ft_putchar(temp3 | 128);
// 	ft_putchar(temp4 | 128);
// 	return (4);
// }
