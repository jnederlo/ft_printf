
#include "ft_printf.h"

int		cs_d(char **fmt, t_badge *badge, va_list ap)
{
	int d;
	int length = 2;

	d = va_arg(ap, int);
	ft_putnbr(d);
	(*fmt)++;
	return (length);
}

int		cs_i(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_o(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_u(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_x(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_X(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_D(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_O(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_U(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_C(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_c(char **fmt, t_badge *badge, va_list ap)
{
		char c;

		c = va_arg(ap, int);
		write (1, &c, 1);
		(*fmt)++;
		return (1);
}

int		cs_S(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_s(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}

int		cs_p(char **fmt, t_badge *badge, va_list ap)
{
		return(0); 
}