
#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		len;
	t_badge	badge;

	va_start(ap, fmt);
	s_badge_reset(&badge);
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
			len += sub_fmt(&fmt, &badge, ap); // step into sub-string functions and increase len by some amount
		else
		{
			len += write(1, fmt, 1);
			fmt++;
		}
	}
	va_end(ap);
	return (len);
}

/*  In this function I am first calling flag_set() which will set values for flags
	(while calling nested functions to other badges). It will then use my dispatch
	table to call the correct .choose_cs() if it exists, while setting the correct 
	cs_func, else it will check for the % sign, and finally it will return the len */
// int		sub_fmt(char **fmt, t_badge *badge, va_list ap)
// {
// 	int			len;

// 	printf("	Start of SUB_FMT");
// 	len = 0;
// 	flag_set(badge, fmt);
// 	if (conv_spec(fmt, badge, ap))// if fmt is pointing at a valid cs
// 	{
// 		g_cs_list[g_cs_type].choose_cs(fmt, badge, ap);
// 	}
// 	if (*(*fmt) == '%')
// 	{
// 		(*fmt)++;
// 		len += write(1, "%", 1);
// 	}
// 	return (len);
// }

// int		cs_d(char **fmt, t_badge *badge, va_list ap)
// {
// 	int d;
// 	int length = 2;

// 	printf("Start of cs_d\n");
// 	d = va_arg(ap, int);
// 	ft_putnbr(d);
// 	return (length);
// }

void s_badge_reset(t_badge *badge)
{
	badge->pound = 0;
	badge->jleft = 0;
	badge->zero = 0;
	badge->space = 0;
	badge->sign = 0;
	badge->min_width = 0;
	badge->precision = 0;
	badge->l = 0;
	badge->ll = 0;
	badge->h = 0;
	badge->hh = 0;
	badge->j = 0;
	badge->z = 0;
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
