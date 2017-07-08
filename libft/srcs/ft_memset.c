/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 10:33:39 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:31:04 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *bu;

	bu = (unsigned char*)b;
	while (len > 0)
	{
		*bu = (unsigned char)c;
		bu++;
		len--;
	}
	return (b);
}
