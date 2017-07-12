/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:30 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/12 11:37:23 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
**initializing the global data that was declared in the header
*/

const	t_cs_badge	g_cs_list[] = {
	{'d', CS_LC_D, g_cs_lc_d},
	{'i', CS_LC_I, g_cs_lc_d},
	{'o', CS_LC_O, g_cs_lc_o},
	{'u', CS_LC_U, g_cs_lc_u},
	{'x', CS_LC_X, g_cs_lc_x},
	{'X', CS_UC_X, g_cs_uc_x},
	{'D', CS_UC_D, g_cs_uc_d},
	{'O', CS_UC_O, g_cs_uc_o},
	{'U', CS_UC_U, g_cs_uc_u},
	{'C', CS_UC_C, g_cs_uc_c},
	{'c', CS_LC_C, g_cs_lc_c},
	{'S', CS_UC_S, g_cs_uc_s},
	{'s', CS_LC_S, g_cs_lc_s},
	{'p', CS_LC_P, g_cs_lc_p},
};

/*
**global variable to determine which function pointer to call:
*/

int		g_cs_type;

/*
**determines the number of initializers coded,
**making it easy to add functionality later.
*/

const	int		g_nbr_cs_badge = sizeof(g_cs_list) / sizeof(t_cs_badge);

/*
**determines which cs_badge to use:
*/

int		conv_spec(char **fmt, t_badge *badge, va_list ap)
{
	int		i;
	int		cs_true;

	(void)badge;//to silence -Werror - maybe I don't have to pass into this func.
	(void)ap;//to silence -Werror - maybe I don't have to pass into this func.
	i = 0;
	cs_true = 0;
	while (i < g_nbr_cs_badge)
	{
		if (g_cs_list[i].cs == *(*fmt))
		{
			cs_true = 1;
			g_cs_type = g_cs_list[i].type;
			break ;
		}
		i++;
	}
	if (cs_true == 0)
		return (0);//indicating some error, or that we aren't on the CS element yet.
	return (1);
}

/*
**function that actually calls the correct function pointer
**by using the function dispatcher.
*/

int		sub_fmt(char **fmt, t_badge *badge, va_list ap)
{
	int		len;

	len = 0;
	min_width_set(badge, fmt, ap);
	if (conv_spec(fmt, badge, ap))//if fmt is pointing at a valid cs
		len = g_cs_list[g_cs_type].choose_cs(fmt, badge, ap);
	if (*(*fmt) == '%')
	{
		(*fmt)++;
		len += write(1, "%", 1);
	}
	return (len);
}
