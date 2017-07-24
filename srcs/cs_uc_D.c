/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_uc_D.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 10:51:14 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/24 11:21:18 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		choose_len_uc_d(t_type *type, t_badge *badge, va_list ap)
{
	long long	num;

	if (badge->l || badge->ll || badge->j || badge->z)
	{
		type->ll_int = va_arg(ap, long long);
		return (num = count_digit_lli(type));
	}
	// else if (badge->ll)
	// {
	// 	type->ll_int = va_arg(ap, long long);
	// 	return (num = count_digit_lli(type));
	// }
	else if (badge->h)
	{
		type->ll_int = va_arg(ap, long);//changed these to long
		// edge_cases(type, badge);
		return (num = count_digit_lli(type));
	}
	else
	{
		type->ll_int = va_arg(ap, long);//changed these to long
		// edge_cases(type, badge);
	}
	return (num = count_digit_lli(type));
}
