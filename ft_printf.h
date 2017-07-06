
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/includes/libft.h"
# define CS_LC_D	0
# define CS_LC_I	1
# define CS_LC_O	2
# define CS_LC_U	3
# define CS_LC_X	4
# define CS_UC_X	5
# define CS_UC_D	6
# define CS_UC_O	7
# define CS_UC_U	8
# define CS_UC_C	9
# define CS_LC_C	10
# define CS_UC_S	11
# define CS_LC_S	12
# define CS_LC_P	13

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

// the program will put pointers to functions into a datastructure.
// The functions will all take 3 arguments (char *fmt, t_badge *badge, va_list ap) and is defined here:

typedef		int t_choose_cs(char ** fmt, t_badge *badge, va_list ap);

typedef struct			s_cs_badge
{
	char		cs;
	int			type;
	t_choose_cs	*choose_cs;
}						t_cs_badge;

// There will be a list of t_cs_badge structs and there will be nbr_cs_badge elements in this array:
extern const t_cs_badge	g_cs_list[];
extern const int		nbr_cs_badge;

extern int				g_cs_type;

// Now the header file provides the equivalent function prototyps for some functions of type t_choose_cs
extern t_choose_cs	cs_d;
extern t_choose_cs	cs_i;
extern t_choose_cs	cs_o;
extern t_choose_cs	cs_u;
extern t_choose_cs	cs_x;
extern t_choose_cs	cs_X;
extern t_choose_cs	cs_D;
extern t_choose_cs	cs_O;
extern t_choose_cs	cs_U;
extern t_choose_cs	cs_C;
extern t_choose_cs	cs_c;
extern t_choose_cs	cs_S;
extern t_choose_cs	cs_s;
extern t_choose_cs	cs_p;


int		ft_printf(char *fmt, ...);
int		sub_fmt(char **fmt, t_badge *badge, va_list ap);
void	flag_set(t_badge *badge, char **fmt);
int		conv_spec(char **fmt, t_badge *badge, va_list ap);
void	s_badge_reset(t_badge *badge);

#endif