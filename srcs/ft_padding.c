/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:48:50 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/09 19:30:36 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_padding(t_badge *badge, int d, char c)
{
	int	num;

	num = badge->sign ? 1 : 0;
	num = d < 0 ? 1 : 0;
	if (badge->space && d >= 0)
		num++;
	if (c == ' ')
	{
		while ((num + ft_count_digits(d)) < badge->min_w)
		{
			write(1, " ", 1);
			num++;
		}
	}
	else
	{
		while ((num + ft_count_digits(d)) < badge->min_w)
		{
			write(1, "0", 1);
			num++;
		}
	}
}
