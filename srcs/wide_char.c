/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wide_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:37:56 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:24:35 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	else if ((unsigned int)wc < TWO_BYTE)
		return (2);
	else if ((unsigned int)wc < THREE_BYTE)
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
		ft_putchar((unsigned int)wc);
	else if ((unsigned int)wc < TWO_BYTE)
	{
		ft_putchar(((unsigned int)wc >> 6) | 192);
		ft_putchar(((unsigned int)wc & 63) | 128);
		return (2);
	}
	else if ((unsigned int)wc < THREE_BYTE)
	{
		ft_putchar(((unsigned int)wc >> 12) | 224);
		ft_putchar((((unsigned int)wc >> 6) & 63) | 128);
		ft_putchar((((unsigned int)wc) & 63) | 128);
		return (3);
	}
	else
	{
		ft_putchar(((unsigned int)wc >> 18) | 240);
		ft_putchar((((unsigned int)wc >> 12) & 63) | 128);
		ft_putchar((((unsigned int)wc >> 6) & 63) | 128);
		ft_putchar(((unsigned int)wc & 63) | 128);
		return (4);
	}
	return (1);
}
