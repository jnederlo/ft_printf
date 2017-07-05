
#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		len;
	t_badge	badge;

	va_start(ap, fmt);
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			printf("just before I call sub_fmt");
			len += sub_fmt(&fmt, &badge, ap); // step into sub-string functions and increase len by some amount
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

/*  In this function I am first calling flag_set() which will set values for flags
	(while calling nested functions to other badges). It will then use my dispatch
	table to call the correct .choose_cs() if it exists, while setting the correct 
	cs_func, else it will check for the % sign, and finally it will return the len */
int		sub_fmt(char **fmt, t_badge *badge, va_list ap)
{
	int			len;

	printf("	Start of SUB_FMT");
	g_cs_type = 0;
	len = 0;
	flag_set(badge, fmt);
	if (conv_spec(fmt, badge, ap))// if fmt is pointing at a valid cs
	{
		g_cs_list[g_cs_type].choose_cs(fmt, badge, ap);
	}
	if (*(*fmt) == '%')
	{
		(*fmt)++;
		len += write(1, "%", 1);
	}
	return (len);
}

int		cs_d(char **fmt, t_badge *badge, va_list ap)
{
	int d;
	int length = 2;

	printf("	Start of cs_d");
	d = va_arg(ap, int);
	ft_putnbr(d);
	return (length);
}



void	flag_set(t_badge *badge, char **fmt)
{
	(*fmt)++;
	
	printf("	start of FLAG_SET");
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
