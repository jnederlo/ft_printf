/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:08:56 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/15 19:34:28 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_flags(t_badge *badge, t_type *type)
{
	long long	nb;

	nb = type->ll_int;
	if (badge->jleft)
		badge->zero = 0;
	if (badge->sign || nb < 0)
		badge->space = 0;
}

void	f_sign_space(t_badge *badge, t_type *type, int mod)
{
	if (mod == MOD_ELSE && (badge->sign || badge->space))
		type->ll_int >= 0 ? badge->min_w-- : 0;
	else if (mod == MOD_W || mod == MOD_P)
	{
		if (badge->sign && type->ll_int >= 0)
		{
			ft_putchar('+');
			badge->min_w--;
		}
		else if (type->ll_int < 0)
		{
			ft_putchar('-');
			type->ll_int *= -1;
			badge->min_w--;
		}
		else if (badge->space)
		{	
			ft_putchar(' ');
			badge->min_w--;
		}
	}
}
