/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:41:42 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/13 12:03:46 by jnederlo         ###   ########.fr       */
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
	s_badge_reset(&badge);//do this here or below?
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			s_badge_reset(&badge);//do this here or above?
			len += sub_fmt(&fmt, &badge, ap);//step into sub-string functions and increase len by some amount
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

void	s_badge_reset(t_badge *badge)
{
	badge->pound = 0;
	badge->jleft = 0;
	badge->zero = 0;
	badge->space = 0;
	badge->sign = 0;
	badge->min_w = -1;//have to set to -1 b/c it could be zero.
	badge->prec = -1;//have to set to -1 b/c it could be zero.
	badge->l = '\0';
	badge->ll = '\0';
	badge->h = '\0';
	badge->hh = '\0';
	badge->j = '\0';
	badge->z = '\0';
}

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

void	min_width_set(t_badge *badge, char **fmt, va_list ap)
{
	flag_set(badge, fmt);
	if (*(*fmt) == '*')
	{
		badge->min_w = va_arg(ap, int); //setting the min_width to argument.
		(*fmt)++;
		precision_set(badge, fmt, ap);
		return ;
	}
	else if (ft_isdigit(*(*fmt)))
		badge->min_w = ft_atoi(*fmt); //setting the min_width to number.
	while (ft_isdigit(*(*fmt)))
		(*fmt)++;
	precision_set(badge, fmt, ap);
}

void	precision_set(t_badge *badge, char **fmt, va_list ap)
{
	if (*(*fmt) == '.')
		(*fmt)++;
	else
	{
		len_mod_set(badge, fmt, ap);
		return ;
	}
	if (*(*fmt) == '*')
	{
		badge->prec = va_arg(ap, int); //setting the precision to argument
		(*fmt)++;
		len_mod_set(badge, fmt, ap);
		return ;
	}
	else
		badge->prec = ft_isdigit(*(*fmt)) ? ft_atoi(*fmt) : 0;
	while (ft_isdigit(*(*fmt)))
		(*fmt)++;
	len_mod_set(badge, fmt, ap);
}

void	len_mod_set(t_badge *badge, char **fmt, va_list ap)
{
	(void)ap;//to silence -Werror - maybe I don't have to pass into func?
	if (*(*fmt) == 'j' || *(*fmt) == 'z')
	{
		*(*fmt) == 'j' ? badge->j = 'j' : 0;
		*(*fmt) == 'z' ? badge->z = 'z' : 0;
		//print_badge(badge);//WILL NEED TO REMOVE THIS!!!!!!!!!!!!!!!!
		(*fmt)++;
		return ;
	}
	else if (*(*fmt) == 'l' || *(*fmt) == 'h')
	{
		if ((*(*fmt) == 'l' && *(*fmt + 1) != 'l') || (*(*fmt) == 'h' && *(*fmt + 1) != 'h'))
		{
			*(*fmt) == 'l' ? badge->l = 'l' : 0;
			*(*fmt) == 'h' ? badge->h = 'h' : 0;
			//print_badge(badge);//WILL NEED TO REMOVE THIS!!!!!!!!!!!!!!!!
			(*fmt)++;
			return ;
		}
		else if (*(*fmt) == 'l' && *(*fmt + 1) == 'l')
			badge->ll = 'L';
		else if (*(*fmt) == 'h' && *(*fmt + 1) == 'h')
			badge->h = 'H';
		(*fmt) += 2;
	}
	//print_badge(badge);//WILL NEED TO REMOVE THIS!!!!!!!!!!!!!!!
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
