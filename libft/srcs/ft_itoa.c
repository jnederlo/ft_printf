/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 12:07:38 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/12 17:31:46 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counts the number of digits in the number passed as 'n'.
** Sets nb = n (nb is unsigned int so it gets rid of '-').
** Accounts for negative by setting nb = -n, then adds 1 to the length.
** Creates space for my string with ft_strnew(length) to pointer p.
** Sends pointer p to point at last element in created string.
** If nb == 0 moves back one from the null and set *p = '0'.
** while nb != 0, get remainder of last digit divided by 10, set *p to ascii.
** Decrease pointer by one and remove last digit from number, until nb = 0.
** if n < 0 add in the negative.
** return pointer to start of created string.
*/

#include "../includes/libft.h"

char	*ft_itoa(int n)
{
	char			*p;
	unsigned int	nb;
	size_t			length;

	length = ft_count_digits(n);
	nb = n;
	if (n < 0)
	{
		nb = -n;
		length++;
	}
	p = ft_strnew(length);
	if (!p)
		return (0);
	p += length;
	if (nb == 0)
		*--p = '0';
	while (nb != 0)
	{
		*--p = nb % 10 + 48;
		nb /= 10;
	}
	if (n < 0)
		*--p = '-';
	return (p);
}
