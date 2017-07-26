/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:42:04 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/26 13:25:30 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <wchar.h>
# include <stdlib.h>
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
# define CS_PC_S	14
# define MOD_W		1
# define MOD_P		2
# define MOD_WP		3
# define MOD_ELSE	4
# define MOD_W_X	5
# define MOD_P_X	6
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
# define ONE_BYTE	128
# define TWO_BYTE	2048
# define THREE_BYTE	65536

typedef struct			s_type
{
	long long			ll_int;
	unsigned long long	ull_int;
}						t_type;

typedef struct			s_badge
{
	int		pound:1;
	int		jleft:1;
	int		zero:1;
	int		space:1;
	int		sign:1;
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
extern t_choose_cs		g_cs_pc_s;

/*
**Funtions in badge_set.c
*/
void					min_width_set(t_badge *badge, char **fmt, va_list ap);
void					flag_set(t_badge *badge, char **fmt);
void					precision_set(t_badge *badge, char **fmt, va_list ap);
void					len_mod_set(t_badge *badge, char **fmt);

/*
**Functions in cs_c_print.c
*/
int						cs_c_print(char **fmt, t_badge *badge, va_list ap);
void					cs_c_print_w(t_badge *badge);

/*
**Funtions in cs_d_helpers.c
*/
void					f_sign_space(t_badge *badge, t_type *type, int mod);
int						count_digit_lli(t_type *type);
void					putnbr_lli(long long nb);

/*
**Functions in cs_d_print.c
*/
int						cs_lc_d_wp(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_d_prec(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_d_width(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_d_def(t_type *type, t_badge *badge, char **fmt);

/*
**Funtions in cs_d_start.c
*/
int						choose_field(int num, t_badge *badge,
											t_type *d, char **fmt);
int						choose_len(t_type *type, t_badge *badge, va_list ap);
void					flag_rules(t_badge *badge, t_type *d);
void					arg_type_reset(t_type *type);
void					edge_cases_d(t_type *type, t_badge *badge);

/*
**Functions in cs_o_print.c
*/
int						cs_lc_o_wp(t_type *type, t_badge *badge,
											char **fmt, int num);
int						cs_lc_o_prec(t_type *type, t_badge *badge,
											char **fmt, int num);
int						cs_lc_o_width(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_o_def(t_type *type, t_badge *badge, char **fmt);
char					*base_less_10(t_type *type, int base);

/*
**Funtions in cs_o_start.c
*/
int						choose_field_o(int num, t_badge *badge,
											t_type *d, char **fmt);
int						choose_len_o(t_type *type, t_badge *badge, va_list ap);
void					flag_rules_o(t_badge *badge, t_type *d);
void					arg_type_reset_o(t_type *type);

/*
**Functions in cs_p_print.c
*/
int						cs_p_print(char **fmt, t_badge *badge,
											va_list ap, t_type *type);
void					cs_p_print_w(t_badge *badge, t_type *type);
int						count_digit_ulli_base(t_type *type, int base);
void					arg_type_reset_p(t_type *type);
void					cs_p_print_spaces(int width);

/*
**Functions in cs_s_print.c
*/
int						cs_lc_s_print(char **fmt, t_badge *badge, va_list ap);
int						cs_lc_s_wp(char *str, t_badge *badge, int len);
int						cs_lc_s_p(char *str, t_badge *badge, int len);
int						cs_lc_s_width(char *str, t_badge *badge, int len);
void					cs_lc_s_print_w(int	width);

/*
**Funtions in cs_u_helpers.c
*/
int						count_digit_ulli(t_type *type);
void					putnbr_ulli(unsigned long long nb);

/*
**Functions in cs_u_print.c
*/
int						cs_lc_u_wp(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_u_prec(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_u_width(t_type *type, t_badge *badge, char **fmt);
int						cs_lc_u_def(t_type *type, t_badge *badge, char **fmt);

/*
**Funtions in cs_u_start.c
*/
int						choose_field_u(int num, t_badge *badge,
											t_type *d, char **fmt);
int						choose_len_u(t_type *type, t_badge *badge, va_list ap);
void					flag_rules_u(t_badge *badge, t_type *d);
void					arg_type_reset_u(t_type *type);

/*
**Functions in cs_uc_c_print.c
*/
int						cs_uc_c_print(char **fmt, t_badge *badge, va_list ap);
void					cs_uc_c_print_w(t_badge *badge);

/*
**Funtions in cs_uc_duo.c
*/
int						choose_len_uc_uo(t_type *type, t_badge *badge,
											va_list ap);
int						choose_len_uc_d(t_type *type, t_badge *badge,
											va_list ap);

/*
**Functions in cs_uc_s_print.c
*/
int						cs_uc_s_print(char **fmt, t_badge *badge, va_list ap);
int						cs_uc_s_wp(wchar_t *str, t_badge *badge, int len);
int						cs_uc_s_p(wchar_t *str, t_badge *badge, int len);
int						cs_uc_s_width(wchar_t *str, t_badge *badge, int len);
void					cs_uc_s_print_w(int	width);

/*
**Functions in cs_uc_x_print.c
*/
int						cs_uc_x_wp(t_type *type, t_badge *badge,
												char **fmt, char *str);
int						cs_uc_x_prec(t_type *type, t_badge *badge,
												char **fmt, char *str);
int						cs_uc_x_width(t_type *type, t_badge *badge,
												char **fmt, char *str);
int						cs_uc_x_def(t_type *type, t_badge *badge,
												char **fmt, char *str);
char					*base_greater_10_uc_x(t_type *type, int base);

/*
**Funtions in cs_uc_x_start.c
*/
int						choose_field_uc_x(int num, t_badge *badge,
												t_type *d, char **fmt);
int						choose_len_uc_x(t_type *type, t_badge *badge,
												va_list ap);

/*
**Functions in cs_x_print.c
*/
int						cs_lc_x_wp(t_type *type, t_badge *badge,
												char **fmt, char *str);
int						cs_lc_x_prec(t_type *type, t_badge *badge,
												char **fmt, char *str);
int						cs_lc_x_width(t_type *type, t_badge *badge,
												char **fmt, char *str);
int						cs_lc_x_def(t_type *type, t_badge *badge,
												char **fmt, char *str);
char					*base_greater_10_x(t_type *type, int base);

/*
**Funtions in cs_x_start.c
*/
int						choose_field_x(int num, t_badge *badge,
												t_type *d, char **fmt);
int						choose_len_x(t_type *type, t_badge *badge, va_list ap);
void					flag_rules_x(t_badge *badge, t_type *type);
void					arg_type_reset_x(t_type *type);
int						nullinator(t_badge *badge, char **fmt, t_type *type);

/*
**Functions in dispatcher.c
*/
int						sub_fmt(char **fmt, t_badge *badge, va_list ap);
int						conv_spec(char **fmt);

/*
**Funtions in ft_printf.c
*/
int						ft_printf(char *fmt, ...);
void					badge_reset(t_badge *badge);

/*
**Funtions in padding.c
*/
void					padding_wp(t_badge *badge, t_type *type,
												char c, int mod);
int						set_digit(t_badge *badge, t_type *type, int mod);

/*
**Functions in wide_char.c
*/
int						w_strlen(wchar_t *w_str);
int						w_charlen(wchar_t wc);
int						w_putstr(wchar_t *ws);
int						w_putchar(wchar_t wc);

/*
**Functions in library_funcs.c
*/

int						ft_atoi(const char *str);
int						ft_isdigit(int c);
void					ft_putchar(char c);
size_t					ft_strlen(const char *s);
void					ft_putstr(char const *s);

#endif
