



#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define CS_LC_D	0
#define CS_LC_I	1
#define CS_LC_O	2
#define CS_LC_U	3
#define CS_LC_X	4
#define CS_UC_X	5
#define CS_UC_D	6
#define CS_UC_O	7
#define CS_UC_U	8
#define CS_UC_C	9
#define CS_LC_C	10
#define CS_UC_S	11
#define CS_LC_S	12
#define CS_LC_P	13

void  ft_putnbr(int nb)
{
  if (nb < 0)
  {
    if (nb == -2147483648)
    {
      ft_putnbr(nb / 10);
      putchar('8');
      return ;
    }
    putchar('-');
    nb = -nb;
  }
  if (nb >= 10)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else 
    putchar(nb + 48);
}

typedef struct			s_badge
{
	int	pound;
	int jleft;
	int	zero;
	int	space;
	int	sign;
	int	min_width;
	int	precision;
	int	l;
	int	ll;
	int	h;
	int	hh;
	int	j;
	int	z;
}						t_badge;

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

typedef		int t_choose_cs(char **, t_badge *, va_list);

typedef struct	s_cs_badge
{
	char		cs;
	int			type;
	t_choose_cs	*choose_cs;
}				t_cs_badge;

// equivalent to function prototyp for functions of type t_choose_cs:
t_choose_cs cs_d;
t_choose_cs cs_c;

//const struct s_cs_badge	g_cs_list[];

int		ft_printf(char *fmt, ...);
int		sub_fmt(char **fmt, t_badge *badge, va_list ap);
void	flag_set(t_badge *badge, char **fmt);
int		conv_spec(char **fmt, t_badge *badge, va_list ap);

const	t_cs_badge	g_cs_list[] = {

//		cs:		type:		choose_cs:
		{'d',	CS_LC_D,	cs_d},
//		{'i',	CS_LC_I,	cs_i},
//		{'o',	CS_LC_O,	cs_o},
//		{'u',	CS_LC_S,	cs_u},
//		{'x',	CS_LC_X,	cs_x},
//		{'X',	CS_UC_X,	cs_X},
//		{'D',	CS_UC_D,	cs_D},
//		{'O',	CS_UC_O,	cs_O},
//		{'U',	CS_UC_U,	cs_U},
//		{'C',	CS_UC_C,	cs_C},
		{'c',	CS_LC_C,	cs_c},
//		{'S',	CS_UC_S,	cs_S},
//		{'s',	CS_LC_S,	cs_s},
//		{'p',	CS_LC_P,	cs_p},

};

// global variable to determine which function pointer to call:
int		g_cs_type;

//determines the number of initializers coded, making it easy to add functionality later.
const	int		g_nbr_cs_badge = sizeof(g_cs_list) / sizeof(struct s_cs_badge);

//determines which cs_badge to use:
int		conv_spec(char **fmt, t_badge *badge, va_list ap)
{
	int		i;
	int		cs_true;

	i = 0;
	cs_true = 0;
	while (i < g_nbr_cs_badge)
	{
		if (g_cs_list[i].cs == *(*fmt))
		{
			cs_true = 1;
			g_cs_type = g_cs_list[i].type;
			break;
		}
		i++;
	}
	if (cs_true == 0)
		return (0); 
	
	return (1);
}

int		sub_fmt(char **fmt, t_badge *badge, va_list ap)
{
	int			len;

	len = 0;
	flag_set(badge, fmt);
	if (conv_spec(fmt, badge, ap))
	{
		printf("\nfmt is pointing at a valid cs\n");
		len = g_cs_list[g_cs_type].choose_cs(fmt, badge, ap);
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

	d = va_arg(ap, int);
	ft_putnbr(d);
	(*fmt)++;
	return (length);
}

int   cs_c(char **fmt, t_badge *badge, va_list ap)
{
  char c;

  c = va_arg(ap, char);
  write (1, &c, 1);
  (*fmt)++;
  return (1);
}

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
		{
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

int	main()
{
	int len;

	len = ft_printf("The number is %d", 27);
//	printf("%d\n", len);
	return (0);
}