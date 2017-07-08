/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 17:48:29 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:44:03 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int index;

	index = 0;
	if (!s)
		return ;
	while (*s && *f)
		f(index++, s++);
}
