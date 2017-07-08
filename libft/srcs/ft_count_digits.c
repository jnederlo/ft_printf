/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 11:14:56 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/19 11:26:57 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Count the number of digits in a number by 'chopping off' last digit
** and counting 'i' while 'n' does not equal 0.
** Accounts for the largest negative int and handles if n = zero
** meaning 1 digit of 0.
*/

#include "../includes/libft.h"

int	ft_count_digits(int n)
{
	int	i;

	if (n == -2147483648)
		i = 0;
	else if (n == 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
