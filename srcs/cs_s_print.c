/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_s_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:03:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/18 13:07:07 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
**Handles if both width and precision fields are specified.
*/

int		cs_lc_s_wp(char *str, t_badge *badge, int len)
{
	int	width;
	int	prec;

	width = badge->min_w;
	prec = badge->prec;
	if (badge->prec == 0)
	{
		len = width;
		while (width > 0)
		{
			ft_putchar(' ');
			width--;
		}
	}
	else if (prec < len)
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
			while (width > 0)
			{
				ft_putchar(' ');
				width--;
			}
			len += cs_lc_s_p(str, badge, len);
		}


		// badge->min_w = badge->min_w - badge->prec;
		// badge->jleft ? len = cs_lc_s_p(str, badge, len) : 0;
		// // printf("badge->min_w = %d\n", badge->min_w);
		// // printf("strlen = %zu\n", ft_strlen(str));
		// !badge->jleft ? len = cs_lc_s_p(str, badge, len) : 0;
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
	len = badge->min_w;
	badge->min_w = badge->prec != 0 ? badge->min_w - ft_strlen(str) : badge->min_w;
	if (badge->jleft)
	{
		badge->prec != 0 ? ft_putstr(str): 0;
		while (badge->min_w > 0)
		{
			ft_putchar(' ');
			badge->min_w--;
		}
	}
	else
	{
		while (badge->min_w > 0)
		{
			ft_putchar(' ');
			badge->min_w--;
		}
		badge->prec != 0 ? ft_putstr(str): 0;
	}
	return (len);
}











int		cs_lc_u_wp(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		cs_lc_u_prec(type, badge, fmt);
		padding_wp(badge, type, ' ', MOD_WP);
	}
	else if (badge->zero)
	{
		!badge->sign && !badge->space ? 0 : badge->min_w--;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_u_prec(type, badge, fmt);
	}
	else
	{
		badge->sign || badge->space ? badge->min_w-- : 0;
		padding_wp(badge, type, ' ', MOD_WP);
		cs_lc_u_prec(type, badge, fmt);
	}
	return (len);
}

/*
**Handles if the precision field is specified.
*/

int		cs_lc_u_prec(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = count_digit_ulli(type);
	len = badge->prec > len ? badge->prec : len;
	len = badge->prec == 0 && type->ull_int == 0 ? 0 : len;
	if (badge->prec == 0 && type->ull_int == 0)
	{
		f_sign_space_u(badge, type, MOD_P);
		len += badge->sign || badge->space ? 1 : 0;
	}
	else if (badge->prec > 0 && type->ull_int == 0)
	{
		f_sign_space_u(badge, type, MOD_P);
		padding_wp(badge, type, '0', MOD_P);
		len += badge->sign || badge->space ? 1 : 0;
	}
	else
	{
		len += badge->sign || badge->space ? 1 : 0;
		f_sign_space_u(badge, type, MOD_P);
		padding_wp(badge, type, '0', MOD_P);
		putnbr_ulli(type->ull_int);
	}
	(*fmt)++;
	return (len);
}

/*
**Handles if only width field is specified.
*/

int		cs_lc_u_width(t_type *type, t_badge *badge, char **fmt)
{
	int			len;

	len = badge->min_w;
	if (badge->jleft)
	{
		f_sign_space_u(badge, type, MOD_W);
		putnbr_ulli(type->ull_int);
		padding_wp(badge, type, ' ', MOD_W);
	}
	else if (badge->zero)
	{
		f_sign_space_u(badge, type, MOD_W);
		padding_wp(badge, type, '0', MOD_W);
		putnbr_ulli(type->ull_int);
	}
	else
	{
		f_sign_space_u(badge, type, MOD_ELSE);
		padding_wp(badge, type, ' ', MOD_W);
		f_sign_space_u(badge, type, MOD_W);
		putnbr_ulli(type->ull_int);
	}
	(*fmt)++;
	return (len);
}

/*
**Handles if neither width and precision fields are specified.
*/

int		cs_lc_u_def(t_type *type, t_badge *badge, char **fmt)
{
	int len;

	len = 0;
	if (badge->sign || badge->space)
	{
		badge->space ? ft_putchar(' ') : 0;
		badge->sign ? ft_putchar('+') : 0;
		badge->sign || badge->space ? len++ : 0;
	}
	putnbr_ulli(type->ull_int);
	len += count_digit_ulli(type);
	(*fmt)++;
	return (len);
}
