/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_x_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 11:52:03 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		cs_uc_x_wp(t_type *type, t_badge *badge, char **fmt, char *str)
{
	int	len;

	len = badge->min_w > badge->prec ? badge->min_w : badge->prec;
	if (badge->jleft)
	{
		badge->jleft && badge->pound ? badge->min_w-- : 0;
		cs_uc_x_prec(type, badge, fmt, str);
		padding_wp(badge, type, ' ', MOD_WP);
	}
	else
	{
		badge->pound && badge->prec == 0 ? badge->min_w-- : 0;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_uc_x_prec(type, badge, fmt, str);
	}
	return (len);
}

int		cs_uc_x_prec(t_type *type, t_badge *badge, char **fmt, char *str)
{
	int	len;

	len = count_digit_ulli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ull_int == 0 ? 0 : len;
	str = base_greater_10_uc_x(type, 16);
	badge->prec = badge->prec - ft_strlen(str);
	if (badge->pound)
	{
		ft_putstr("0X");
		badge->prec == 0 ? len++ : 0;
	}
	padding_wp(badge, type, '0', MOD_P_X);
	ft_putstr(str);
	(*fmt)++;
	return (len);
}

int		cs_uc_x_width(t_type *type, t_badge *badge, char **fmt, char *str)
{
	int	len;

	len = badge->min_w;
	str = base_greater_10_uc_x(type, 16);
	badge->min_w = badge->min_w - ft_strlen(str);
	if (badge->jleft)
	{
		badge->pound ? ft_putstr("0X") : 0;
		badge->pound ? badge->min_w -= 2 : 0;
		*str == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
		padding_wp(badge, type, ' ', MOD_W_X);
	}
	else
	{
		badge->pound ? badge->min_w -= 2 : 0;
		badge->zero && badge->pound ? ft_putstr("0X") : 0;
		badge->zero ? padding_wp(badge, type, '0', MOD_W_X) :
			padding_wp(badge, type, ' ', MOD_W_X);
		!badge->zero && badge->pound ? ft_putstr("0X") : 0;
		*str == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
	}
	(*fmt)++;
	return (len);
}

int		cs_uc_x_def(t_type *type, t_badge *badge, char **fmt, char *str)
{
	int	len;

	len = 0;
	if (badge->pound && type->ull_int > 0)
	{
		ft_putstr("0X");
		len += 2;
	}
	if (type->ull_int == 0)
	{
		ft_putchar('0');
		len += 1;
		(*fmt)++;
		return (len);
	}
	str = base_greater_10_uc_x(type, 16);
	ft_putstr(str);
	len += ft_strlen(str);
	(*fmt)++;
	free(str);
	return (len);
}

char	*base_greater_10_uc_x(t_type *type, int base)
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
		str[i] = nb % base > 9 ? nb % base + 55 : nb % base + 48;
		nb /= base;
		i--;
	}
	return (str);
}
