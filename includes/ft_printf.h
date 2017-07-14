/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:04 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/13 16:14:41 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/includes/libft.h"
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
# define MOD_W		1
# define MOD_P		2
# define MOD_WP		3
# define MIN_SINT	-32768
# define MAX_SINT	32767
# define MIN_INT	-2147483648
# define MAX_INT	2147483648
# define MIN_LINT	-9223372036854775807 //or -9223372036854775808...
# define MAX_LINT	9223372036854775807
# define MIX_LLINT	-9223372036854775807 //or -9223372036854775808...
# define MAX_LLINT	9223372036854775807
# define MAX_USINT	65535
# define MAX_UINT	4294967295
# define MAX_ULINT	18446744073709551615
# define MAX_ULLINT	18446744073709551615
# define MIN_CHAR	-128
# define MAX_CHAR	127
# define MAX_UCHAR	255

typedef struct			s_type
{
	long long int			ll_int;
	unsigned long long int	ull_int;
}						t_type;


typedef struct			s_badge
{
	int		pound;
	int		jleft;
	int		zero;
	int		space;
	int		sign;
	int		min_w;
	int		prec;
	char	l;
	char	ll;
	char	h;
	char	hh;
	char	j;
	char	z;
}						t_badge;

/*
**the program will put pointers to functions into a datastructure.
**The functions all take 3 arguments and is defined here:
*/

typedef	int				t_choose_cs(char **fmt, t_badge *badge, va_list ap);

typedef struct			s_cs_badge
{
	char		cs;
	int			type;
	t_choose_cs	*choose_cs;
}						t_cs_badge;

/*
**There will be a list of t_cs_badge structs
**and there will be nbr_cs_badge elements in this array:
*/

extern const t_cs_badge	g_cs_list[];
extern const int		g_nbr_cs_badge;

extern int				g_cs_type;

/*
**Now the header file provides the equivalent function prototyps
**for some functions of type t_choose_cs:
*/

extern t_choose_cs		g_cs_lc_d;
// extern t_choose_cs		g_cs_lc_i;
extern t_choose_cs		g_cs_lc_o;
extern t_choose_cs		g_cs_lc_u;
extern t_choose_cs		g_cs_lc_x;
extern t_choose_cs		g_cs_uc_x;
extern t_choose_cs		g_cs_uc_d;
extern t_choose_cs		g_cs_uc_o;
extern t_choose_cs		g_cs_uc_u;
extern t_choose_cs		g_cs_uc_c;
extern t_choose_cs		g_cs_lc_c;
extern t_choose_cs		g_cs_uc_s;
extern t_choose_cs		g_cs_lc_s;
extern t_choose_cs		g_cs_lc_p;

int						ft_printf(char *fmt, ...);
int						sub_fmt(char **fmt, t_badge *badge, va_list ap);
void					s_badge_reset(t_badge *badge);
void					flag_set(t_badge *badge, char **fmt);
void					precision_set(t_badge *badge, char **fmt, va_list ap);
void					min_width_set(t_badge *badge, char **fmt, va_list ap);
void					len_mod_set(t_badge *badge, char **fmt, va_list ap);
int						conv_spec(char **fmt, t_badge *badge, va_list ap);


int						cs_lc_d_width(long long int d, t_badge *badge, char **fmt);
int						cs_lc_d_def(long long int d, t_badge *badge, char **fmt);
void					ft_padding(t_badge *badge, long long d, char c, int mod);
int						cs_lc_d_prec(long long int d,t_badge *badge, char **fmt);
int						cs_lc_d_wp(long long int d, t_badge *badge, char **fmt);

/*
**|||||||||||REMOVE|||||||||||
*/

void					print_badge(t_badge *badge);
void					t_type_reset(t_type *type);
int						len_type(int num, t_badge *badge, t_type *d, char **fmt);
int						len_badge_set(t_type *d, t_badge *badge, va_list ap);
int						count_digit_lli(long long int d);
void					putnbr(long long int d);
void					reset_flags(t_badge *badge, t_type *d);

#endif
