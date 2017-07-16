/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:42 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/16 13:39:00 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		len;
	t_badge	badge;

	va_start(ap, fmt);
	//DO I NEED TO MALLOC FOR MY STRUCTS AT ALL???? WHY NOT???
	badge_reset(&badge);//do this here or below?
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			badge_reset(&badge);//do this here or above?
			len += sub_fmt(&fmt, &badge, ap);
		}
		else
		{
			len += write(1, fmt, 1);
			fmt++;
		}
	}
	va_end(ap);
	return (len);
}

/*
**Resets the variables in t_badge back to default
**upon hitting a format specifier (%).
*/

void	badge_reset(t_badge *badge)
{
	badge->pound = 0;
	badge->jleft = 0;
	badge->zero = 0;
	badge->space = 0;
	badge->sign = 0;
	badge->min_w = -1;
	badge->prec = -1;
	badge->l = '\0';
	badge->ll = '\0';
	badge->h = '\0';
	badge->hh = '\0';
	badge->j = '\0';
	badge->z = '\0';
}

/*
**WILL NEED TO REMOVE THIS FUNCTION!!!!!!!!
*/

void	print_badge(t_badge *badge)
{
	printf("\n	\033[4m  PRINTING THE BADGES  \033[0m\n");
	if (!badge->pound)
		printf("\033[31;1m	pound	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	pound	=	%d\033[0m\n", badge->pound);
	if (!badge->jleft)
		printf("\033[31;1m	jleft	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	jleft	=	%d\033[0m\n", badge->jleft);
	if (!badge->zero)
		printf("\033[31;1m	zero	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	zero	=	%d\033[0m\n", badge->zero);
	if (!badge->space)
		printf("\033[31;1m	space	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	space	=	%d\033[0m\n", badge->space);
	if (!badge->sign)
		printf("\033[31;1m	sign	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	sign	=	%d\033[0m\n", badge->sign);
	if (badge->min_w < 0)
		printf("\033[31;1m	min_w	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	min_w	=	%d\033[0m\n", badge->min_w);
	if (badge->prec < 0)
		printf("\033[31;1m	prec	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	prec	=	%d\033[0m\n", badge->prec);
	if (!(badge->l))
		printf("\033[31;1m	l	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	l	=	%c\033[0m\n", badge->l);
	if (!(badge->ll))
		printf("\033[31;1m	ll	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	ll	=	%c\033[0m\n", badge->ll);
	if (!(badge->h))
		printf("\033[31;1m	h	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	h	=	%c\033[0m\n", badge->h);
	if (!(badge->hh))
		printf("\033[31;1m	hh	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	hh	=	%c\033[0m\n", badge->hh);
	if (!(badge->j))
		printf("\033[31;1m	j	=	Not Set\033[0m\n");
	else
		printf("\033[32;1m	j	=	%c\033[0m\n", badge->j);
	if (!(badge->z))
		printf("\033[31;1m	z	=	Not Set\033[0m\n\n");
	else
		printf("\033[32;1m	z	=	%c\033[0m\n\n", badge->z);
}
