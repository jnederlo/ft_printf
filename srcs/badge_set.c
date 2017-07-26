/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   badge_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 10:53:20 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 14:37:34 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**Sets the width to a value in t_badge struct.
*/

void	min_width_set(t_badge *badge, char **fmt, va_list ap)
{
	flag_set(badge, fmt);
	if (*(*fmt) == '*' && ft_isdigit(*(*fmt + 1)))
	{
		(*fmt)++;
		va_arg(ap, int);
	}
	else if (ft_isdigit(*(*fmt)) && *(*fmt + 1) == '*')
		(*fmt)++;
	if (*(*fmt) == '*')
	{
		badge->min_w = va_arg(ap, int);
		badge->min_w < 0 ? badge->jleft = 1 : 0;
		badge->min_w < 0 ? badge->min_w = badge->min_w * -1 : 0;
		(*fmt)++;
		precision_set(badge, fmt, ap);
		return ;
	}
	if (ft_isdigit(*(*fmt)))
		badge->min_w = ft_atoi(*fmt);
	while (ft_isdigit(*(*fmt)))
		(*fmt)++;
	precision_set(badge, fmt, ap);
}

/*
**Sets the flags to a value in t_badge struct.
*/

void	flag_set(t_badge *badge, char **fmt)
{
	(*fmt)++;
	while (*(*fmt) == '#' || *(*fmt) == '+' || *(*fmt) == '-' ||
		*(*fmt) == '0' || *(*fmt) == ' ')
	{
		if (*(*fmt) == '#')
			badge->pound = 1;
		else if (*(*fmt) == '+')
			badge->sign = 1;
		else if (*(*fmt) == '-')
			badge->jleft = 1;
		else if (*(*fmt) == '0')
			badge->zero = 1;
		else if (*(*fmt) == ' ')
			badge->space = 1;
		(*fmt)++;
	}
}

/*
**Sets the precision to a value in t_badge struct.
*/

void	precision_set(t_badge *badge, char **fmt, va_list ap)
{
	if (*(*fmt) == '.')
		(*fmt)++;
	else
	{
		len_mod_set(badge, fmt);
		return ;
	}
	if (*(*fmt) == '*')
	{
		badge->prec = va_arg(ap, int);
		(*fmt)++;
		len_mod_set(badge, fmt);
		return ;
	}
	else
		badge->prec = ft_isdigit(*(*fmt)) ? ft_atoi(*fmt) : 0;
	while (ft_isdigit(*(*fmt)))
		(*fmt)++;
	len_mod_set(badge, fmt);
}

/*
**Sets the length modifier to a char in t_badge struct.
*/

void	len_mod_set(t_badge *badge, char **fmt)
{
	if (*(*fmt) == 'j' || *(*fmt) == 'z')
	{
		*(*fmt) == 'j' ? badge->j = 'j' : 0;
		*(*fmt) == 'z' ? badge->z = 'z' : 0;
		(*fmt)++;
		return ;
	}
	else if (*(*fmt) == 'l' || *(*fmt) == 'h')
	{
		if ((*(*fmt) == 'l' && *(*fmt + 1) != 'l') ||
			(*(*fmt) == 'h' && *(*fmt + 1) != 'h'))
		{
			*(*fmt) == 'l' ? badge->l = 'l' : 0;
			*(*fmt) == 'h' ? badge->h = 'h' : 0;
			(*fmt)++;
			return ;
		}
		else if (*(*fmt) == 'l' && *(*fmt + 1) == 'l')
			badge->ll = 'L';
		else if (*(*fmt) == 'h' && *(*fmt + 1) == 'h')
			badge->hh = 'H';
		(*fmt) += 2;
	}
}
