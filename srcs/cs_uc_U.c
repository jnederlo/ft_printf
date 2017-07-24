/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_U.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 10:52:26 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/24 11:21:28 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		choose_len_uc_u(t_type *type, t_badge *badge, va_list ap)
{
	unsigned long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		type->ull_int = va_arg(ap, unsigned long long);
		return (num = count_digit_ulli(type));
	}
	else if (badge->h)
	{
		type->ull_int = va_arg(ap, unsigned long);//won't let me specify it as "short"
		return (num = count_digit_ulli(type));
	}
	else
		type->ull_int = va_arg(ap, unsigned long);
	return (num = count_digit_ulli(type));
}
