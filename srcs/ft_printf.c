
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

void s_badge_reset(t_badge *badge)
{
	badge->pound = 0;
	badge->jleft = 0;
	badge->zero = 0;
	badge->space = 0;
	badge->sign = 0;
	badge->min_w = 0;
	// badge->min_w_size = 0;
	badge->prec = 0;
	// badge->prec_size = 0;
	badge->l = '\0'; //is this proper, since they are char's???
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
		// badge->min_w_size = ft_count_digits(badge->min_w);
		(*fmt)++;
		precision_set(badge, fmt, ap);
		return ;
	}
	else if (ft_isdigit(*(*fmt)))
		badge->min_w = ft_atoi(*fmt); //setting the min_width to number.
	while (ft_isdigit(*(*fmt)))
		(*fmt)++;
	// badge->min_w_size = ft_count_digits(badge->min_w);
	precision_set(badge, fmt, ap);
}

void	precision_set(t_badge *badge, char **fmt, va_list ap)
{
	if (*(*fmt) == '.')
		(*fmt)++;
	else
		return ;
	if (*(*fmt) == '*')
	{
		badge->prec = va_arg(ap, int); //setting the precision to argument
		// badge->prec_size = ft_count_digits(badge->prec);
		(*fmt)++;
		len_mod_set(badge, fmt, ap);
		return ;
	}
	else if (ft_isdigit(*(*fmt)))
		badge->prec = ft_atoi(*fmt); //setting the precision to number
	while (ft_isdigit(*(*fmt)))
		(*fmt)++;
	// badge->prec_size = ft_count_digits(badge->prec);
	len_mod_set(badge, fmt, ap);
}

void	len_mod_set(t_badge *badge, char **fmt, va_list ap)
{
	(void)	ap;//to silence -Werror - maybe I don't have to pass into func?
	if (*(*fmt) == 'j' || *(*fmt) == 'z')
	{
		*(*fmt) == 'j' ? (badge->j = 'j') : (badge->z = 'z');
		(*fmt)++;
		return ;
	}
	else if (*(*fmt) == 'l' || *(*fmt) == 'h')
	{
		if ((*(*fmt) == 'l' && *(*fmt + 1) != 'l') || (*(*fmt) == 'h' && *(*fmt + 1) != 'h'))
		{
			*(*fmt) == 'l' ? (badge->l = 'l') : (badge->h = 'h');
			(*fmt)++;
			return;
		}
		else if (*(*fmt) == 'l' && *(*fmt + 1) == 'l')
			badge->ll = 'L';
		else if (*(*fmt) == 'h' && *(*fmt + 1) == 'h')
			badge->h = 'H';
		(*fmt) += 2;
	}
}