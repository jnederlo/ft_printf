/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:04 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/19 17:24:36 by jnederlo         ###   ########.fr       */
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
# define MOD_ELSE	4
# define MOD_W_LC_X	5
# define MIN_SINT	-32768
# define MAX_SINT	32767
# define MIN_INT	-2147483648
# define MAX_INT	2147483648
# define MIN_LINT	-9223372036854775808
# define MAX_LINT	9223372036854775807
# define MIX_LLINT	-9223372036854775808
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

/*
**Funtions in ft_printf.c
*/
int						ft_printf(char *fmt, ...);
void					badge_reset(t_badge *badge);
void					print_badge(t_badge *badge);//REMOVE THIS!!!!!!!!!!

/*
**Functions in dispatcher.c
*/
int						sub_fmt(char **fmt, t_badge *badge, va_list ap);
int						conv_spec(char **fmt);

/*
**Funtions in badge_set.c
*/
void					min_width_set(t_badge *badge, char **fmt, va_list ap);
void					flag_set(t_badge *badge, char **fmt);
void					precision_set(t_badge *badge, char **fmt, va_list ap);
void					len_mod_set(t_badge *badge, char **fmt);

/*
**Funtions in cs_d_start.c
*/
int						choose_field(int num, t_badge *badge, t_type *d, char **fmt);
void					arg_type_reset(t_type *type);
void					flag_rules(t_badge *badge, t_type *d);
int						choose_len(t_type *type, t_badge *badge, va_list ap);
void					edge_cases(t_type *type, t_badge *badge);

/*
**Functions in cs_d_print.c
*/
int						cs_lc_d_wp(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_d_prec(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_d_width(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_d_def(t_type *type, t_badge *badge, char **fmt);

/*
**Funtions in padding.c
*/
void					padding_wp(t_badge *badge, t_type *type, char c, int mod);
int						set_digit(t_badge *badge, t_type *type, int mod);

/*
**Funtions in cs_d_helpers.c
*/
void					f_sign_space(t_badge *badge, t_type *type, int mod);
int						count_digit_lli(t_type *type);
void					putnbr_lli(long long nb);

/*
**Funtions in cs_u_start.c
*/
int						choose_field_u(int num, t_badge *badge, t_type *d, char **fmt);
void					arg_type_reset_u(t_type *type);
void					flag_rules_u(t_badge *badge, t_type *d);
int						choose_len_u(t_type *type, t_badge *badge, va_list ap);

/*
**Functions in cs_u_print.c
*/
int						cs_lc_u_wp(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_u_prec(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_u_width(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_u_def(t_type *type, t_badge *badge, char **fmt);

/*
**Funtions in cs_u_helpers.c
*/
void					f_sign_space_u(t_badge *badge, t_type *type, int mod);
int						count_digit_ulli(t_type *type);
void					putnbr_ulli(unsigned long long nb);

/*
**Functions in cs_s_print.c
*/
int						cs_lc_s_wp(char *str, t_badge *badge, int len);
int						cs_lc_s_p(char *str, t_badge *badge, int len);
int						cs_lc_s_width(char *str, t_badge *badge, int len);
void					cs_lc_s_print_w(int	width);

/*
**Functions in cs_c_print.c
*/
void					cs_c_print_w(t_badge *badge);
int						cs_c_print(char **fmt, t_badge *badge, va_list ap);
int						cs_lc_s_print(char **fmt, t_badge *badge, va_list ap);

/*
**Funtions in cs_o_start.c
*/
int						choose_field_o(int num, t_badge *badge, t_type *d, char **fmt);
void					arg_type_reset_o(t_type *type);
void					flag_rules_o(t_badge *badge, t_type *d);
int						choose_len_o(t_type *type, t_badge *badge, va_list ap);

/*
**Functions in cs_o_print.c
*/
int						cs_lc_o_wp(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_o_prec(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_o_width(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_o_def(t_type *type, t_badge *badge, char **fmt);
char					*base_less_10(int value, int base);

/*
**Funtions in cs_o_start.c
*/
int						choose_field_x(int num, t_badge *badge, t_type *d, char **fmt);
void					arg_type_reset_x(t_type *type);
void					flag_rules_x(t_badge *badge, t_type *d);
int						choose_len_x(t_type *type, t_badge *badge, va_list ap);

/*
**Functions in cs_o_print.c
*/
int						cs_lc_x_wp(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_x_prec(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_x_width(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_x_def(t_type *type, t_badge *badge, char **fmt);
char					*base_greater_10(int value, int base);

#endif
