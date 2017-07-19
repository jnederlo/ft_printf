/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_o_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/19 12:44:52 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Handles if both width and precision fields are specified.
*/

int		cs_lc_o_wp(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		badge->jleft && badge->pound ? badge->min_w-- : 0;
		cs_lc_o_prec(type, badge, fmt);
		padding_wp(badge, type, ' ', MOD_WP);
	}
	else
	{
		badge->pound && badge->prec == 0 ? badge->min_w-- : 0;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_o_prec(type, badge, fmt);
	}
	return (len);
}

/*
**Handles if the precision field is specified.
*/

int		cs_lc_o_prec(t_type *type, t_badge *badge, char **fmt)
{
	int		len;
	char	*str;

	len = count_digit_ulli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ull_int == 0 ? 0 : len;
	if (badge->pound)
	{
		ft_putchar('0');
		badge->prec == 0 ? len++ : 0;
		badge->prec > 0 ? badge->prec-- : 0;
	}
	padding_wp(badge, type, '0', MOD_P);
	str = base_less_10(type->ull_int, 8);
	ft_putstr(str);
	(*fmt)++;
	return (len);
}

/*
**Handles if only width field is specified.
*/

int		cs_lc_o_width(t_type *type, t_badge *badge, char **fmt)
{
	int			len;
	char		*str;

	len = badge->min_w;
	if (badge->pound && type->ull_int > 0)
	{
		ft_putchar('0');
		len++;
	}
	if (type->ull_int == 0)
	{
		ft_putchar('0');
		len ++;
	}
	if (badge->jleft)
	{
		str = base_less_10(type->ull_int, 8);
		ft_putstr(str);
		padding_wp(badge, type, ' ', MOD_W);
	}
	else if (badge->zero)
	{
		padding_wp(badge, type, '0', MOD_W);
		str = base_less_10(type->ull_int, 8);
		ft_putstr(str);
	}
	else
	{
		padding_wp(badge, type, ' ', MOD_W);
		str = base_less_10(type->ull_int, 8);
		ft_putstr(str);
	}
	(*fmt)++;
	return (len);
}

/*
**Handles if neither width and precision fields are specified.
*/

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
	str = base_less_10(type->ull_int, 8);
	ft_putstr(str);
	len += ft_strlen(str);
	(*fmt)++;
	return (len);
}

char	*base_less_10(int value, int base)
{
	int				i;
	unsigned int	nb;
	unsigned int	nbr;
	char			*str;

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
		str[i] = nbr % base + 48;
		nbr /= base;
		i--;
	}
	return (str);
}