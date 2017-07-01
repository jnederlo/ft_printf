
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/includes/libft.h"
# define CS_LC_D	1
# define CS_LC_I	2
# define CS_LC_O	3
# define CS_LC_U	4
# define CS_LC_X	5
# define CS_UC_X	6
# define CS_UC_D	7
# define CS_UC_O	8
# define CS_UC_U	9
# define CS_UC_C	10
# define CS_LC_C	11
# define CS_UC_S	12
# define CS_LC_S	13
# define CS_LC_P	14

typedef struct			s_badge
{
	int	pound;
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
}						t_badge

// the program will put pointers to functions into a datastructure.
// The functions will all take 3 arguments (char *fmt, t_badge *badge, va_list ap) and is defined here:

typedef		int t_choose_cs(char *, t_badge *, va_list);

typedef struct			s_cs_badge
{
	char		cs;
	int			type;
	t_choose_cs	*choose_cs;
}						t_cs_badge

// Now the header file provides the equivalent function prototyps for some functions of type t_choose_cs
extern t_choose_cs		cs_d, cs_i, cs_o, cs_u, cs_x, cs_X, cs_D,
						cs_O, cs_U, cs_C, cs_c, cs_S, cs_s, cs_p;

// There will be a list of t_cs_badge structs and there will be nbr_cs_badge elements in this array:

extern const t_cs_badge	g_cs_list[];
extern const int		nbr_cs_badge;

#endif