/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_x_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 12:15:45 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Handles if both width and precision fields are specified.
*/

int		cs_lc_x_wp(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w > badge->prec ? badge->min_w : badge->prec;
	if (badge->jleft)
	{
		badge->jleft && badge->pound ? badge->min_w-- : 0;
		cs_lc_x_prec(type, badge, fmt);
		padding_wp(badge, type, ' ', MOD_WP);
	}
	else
	{
		badge->pound && badge->prec == 0 ? badge->min_w-- : 0;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_x_prec(type, badge, fmt);
	}
	return (len);
}

/*
**Handles if the precision field is specified.
*/

int		cs_lc_x_prec(t_type *type, t_badge *badge, char **fmt)
{
	int		len;
	char	*str;

	len = count_digit_ulli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ull_int == 0 ? 0 : len;
	str = base_greater_10_x(type->ull_int, 16);
	badge->prec = badge->prec - ft_strlen(str);
	if (badge->pound)
	{
		len += 2;
		ft_putstr("0x");
		badge->prec == 0 ? len++ : 0;
	}
	padding_wp(badge, type, '0', MOD_P_X);
	ft_putstr(str);
	(*fmt)++;
	return (len);
}

/*
**Handles if only width field is specified.
*/

int		cs_lc_x_width(t_type *type, t_badge *badge, char **fmt)
{
	int			len;
	char		*str;

	len = badge->min_w;
	str = base_greater_10_x(type->ull_int, 16);
	badge->min_w = badge->min_w - ft_strlen(str);
	if (badge->jleft)
	{
		badge->pound ? ft_putstr("0x") : 0;
		badge->pound ? badge->min_w -= 2 : 0;
		*str == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
		padding_wp(badge, type, ' ', MOD_W_X);
	}
	else
	{
		badge->pound ? badge->min_w -= 2 : 0;
		badge->zero && badge->pound ? ft_putstr("0x") : 0;
		badge->zero ? padding_wp(badge, type, '0', MOD_W_X) :
			 padding_wp(badge, type, ' ', MOD_W_X);
		!badge->zero && badge->pound ? ft_putstr("0x") : 0;
		*str == 0 ? ft_putchar('0') : 0;
		ft_putstr(str);
	}
	(*fmt)++;
	return (len);
}

/*
**Handles if neither width and precision fields are specified.
*/

int		cs_lc_x_def(t_type *type, t_badge *badge, char **fmt)
{
	int		len;
	char	*str;

	len = 0;
	if (badge->pound && type->ull_int > 0)
	{
		ft_putstr("0x");
		len += 2;
	}
	if (type->ull_int == 0)
	{
		ft_putchar('0');
		len += 1;
		(*fmt)++;
		return (len);
	}
	str = base_greater_10_x(type->ull_int, 16);
	ft_putstr(str);
	len += ft_strlen(str);
	(*fmt)++;
	return (len);
}

char	*base_greater_10_x(unsigned long long value, int base)
{
	int						i;
	unsigned long long int	nb;
	unsigned long long int	nbr;
	char					*str;
	char					array[] = "abcdef";

	i = 0;
	nb = value;
	nbr = value;
	while (nb > 0)
	{
		nb /= base;
		i++;
	}
	str = (char *)malloc(sizeof(char) * i);
	str[i] = '\0';
	i--;
	while (nbr > 0)
	{
		if (nbr % base > 9)
			str[i] = array[nbr % base - 10];
		else
			str[i] = nbr % base + 48;
		nbr /= base;
		i--;
	}
	return (str);
}
