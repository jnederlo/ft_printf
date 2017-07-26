/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_o_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 11:51:49 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_lc_o_wp(t_type *type, t_badge *badge, char **fmt, int num)
{
	int		len;
	char	*str;

	len = badge->min_w;
	str = base_less_10(type, 8);
	badge->min_w -= (int)ft_strlen(str) > num ? (int)ft_strlen(str) - num : 0;
	if (badge->jleft)
	{
		badge->jleft && badge->pound ? badge->min_w-- : 0;
		cs_lc_o_prec(type, badge, fmt, num);
		padding_wp(badge, type, ' ', MOD_WP);
	}
	else
	{
		badge->pound && badge->prec == 0 ? badge->min_w-- : 0;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_o_prec(type, badge, fmt, num);
	}
	return (len);
}

int		cs_lc_o_prec(t_type *type, t_badge *badge, char **fmt, int num)
{
	int		len;
	char	*str;

	len = count_digit_ulli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ull_int == 0 ? 0 : len;
	str = base_less_10(type, 8);
	badge->prec -= (int)ft_strlen(str) > num ? (int)ft_strlen(str) - num : 0;
	if (badge->pound)
	{
		ft_putchar('0');
		badge->prec == 0 ? len++ : 0;
		badge->prec > 0 ? badge->prec-- : 0;
	}
	padding_wp(badge, type, '0', MOD_P);
	str = base_less_10(type, 8);
	ft_putstr(str);
	(int)ft_strlen(str) > len ? len = ft_strlen(str) : 0;
	(*fmt)++;
	return (len);
}

int		cs_lc_o_width(t_type *type, t_badge *badge, char **fmt)
{
	int			len;
	char		*str;

	len = badge->min_w;
	if (badge->jleft)
	{
		badge->pound ? ft_putchar('0') : 0;
		badge->pound ? badge->min_w-- : 0;
		str = base_less_10(type, 8);
		*str == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
		padding_wp(badge, type, ' ', MOD_W);
	}
	else
	{
		badge->pound ? badge->min_w-- : 0;
		badge->zero ? padding_wp(badge, type, '0', MOD_W) :
			padding_wp(badge, type, ' ', MOD_W);
		badge->pound ? ft_putchar('0') : 0;
		str = base_less_10(type, 8);
		*str == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
	}
	(*fmt)++;
	return (len);
}

int		cs_lc_o_def(t_type *type, t_badge *badge, char **fmt)
{
	int		len;
	char	*str;

	len = 0;
	if (badge->pound && type->ull_int > 0)
	{
		ft_putchar('0');
		len++;
	}
	if (type->ull_int == 0)
	{
		ft_putchar('0');
		len += 1;
		(*fmt)++;
		return (len);
	}
	str = base_less_10(type, 8);
	ft_putstr(str);
	len += ft_strlen(str);
	(*fmt)++;
	free(str);
	return (len);
}

char	*base_less_10(t_type *type, int base)
{
	int					i;
	unsigned long long	nb;
	char				*str;

	i = 0;
	nb = type->ull_int;
	while (nb > 0)
	{
		nb /= base;
		i++;
	}
	str = (char *)malloc(sizeof(char) * i);
	str[i] = '\0';
	i--;
	nb = type->ull_int;
	while (nb > 0)
	{
		str[i] = nb % base + 48;
		nb /= base;
		i--;
	}
	return (str);
}
