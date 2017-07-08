
#include "ft_printf.h"
#include <unistd.h>

int		cs_d(char **fmt, t_badge *badge, va_list ap)
{
	int d;
	int length;

	d = va_arg(ap, int);
	length = badge->min_w;
	while (length > ft_count_digits(d))
	{
		write(1, " ", 1);
		length--;
	}
	ft_putnbr(d);
	if (badge->min_w > ft_count_digits(d))
		length = badge->min_w;
	else
		length = ft_count_digits(d);
	(*fmt)++;
	return (length);
}

int		cs_i(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_o(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_u(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_x(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_X(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_D(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_O(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_U(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_C(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_c(char **fmt, t_badge *badge, va_list ap)
{
		char c;
		(void)badge;//to silence compile error -Werror

		c = va_arg(ap, int);
		write (1, &c, 1);
		(*fmt)++;
		return (1);
}

int		cs_S(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_s(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}

int		cs_p(char **fmt, t_badge *badge, va_list ap)
{
		(void)fmt;
		(void)badge;
		(void)ap;
		return(0);
}