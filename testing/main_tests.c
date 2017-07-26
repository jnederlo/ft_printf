/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:39:51 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/25 18:07:21 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int my_l;
	int	actual_l;
	int	i = 1;


// /******************************************************************
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// ||||||||||||||||||||||					|||||||||||||||||||||||||||
// ||||||||||||||||||||||		cs_lc_d		|||||||||||||||||||||||||||
// ||||||||||||||||||||||					|||||||||||||||||||||||||||
// ******************************************************************/

// /******************************************************************
// ***				NO WIDTH OR PREC SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||NO WIDTH OR PREC SPECIFERS||||||||||\n\n");

// //	#1
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#2
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#3
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#4
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#5
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#6
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#7
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign				 -->%+d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#8
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign				 -->%+d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#9
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#10
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#11
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% d<--\n", 42);
// 	my_l = ft_printf("MINE:	space				 -->% d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#12
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% d<--\n", -42);
// 	my_l = ft_printf("MINE:	space				 -->% d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#13
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0d<--\n", 42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#14
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0d<--\n", -42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0d<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#16
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0d<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#17
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#18
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#19
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#20
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#21
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#22
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#23
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#24
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%0d<--\n", 0);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// /******************************************************************
// ***						WIDTH SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||WIDTH SPECIFERS||||||||||\n\n");

// //	#25
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#26
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#27
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#28
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#29
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#30
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#31
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign				 -->%+5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#32
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign				 -->%+5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#33
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#34
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#35
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5d<--\n", 42);
// 	my_l = ft_printf("MINE:	space				 -->% 5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#36
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5d<--\n", -42);
// 	my_l = ft_printf("MINE:	space				 -->% 5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#37
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05d<--\n", 42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#38
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05d<--\n", -42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#39
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05d<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%05d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#40
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05d<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%05d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#41
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#42
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#43
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#44
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#45
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#46
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% 5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#47
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#48
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05d<--\n", 0);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// /******************************************************************
// ***					PRECISION SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||PRECISION SPECIFIERS||||||||||\n\n");

// //	#49
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#50
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#51
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#52
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#53
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- .5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- .5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#54
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- .5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- .5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#55
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign				 -->%+.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#56
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign				 -->%+.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#57
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#58
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#59
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% .5d<--\n", 42);
// 	my_l = ft_printf("MINE:	space				 -->% .5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#60
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% .5d<--\n", -42);
// 	my_l = ft_printf("MINE:	space				 -->% .5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#61
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#62
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#63
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%0.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#64
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%0.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#65
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#66
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#67
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- .5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- .5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#68
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#69
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#70
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% .5d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% .5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#71
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#72
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%0.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#73
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.0d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#74
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.0d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#75
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.0d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#76
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.0d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#77
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- .0d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- .0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#78
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- .0d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- .0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#79
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+.0d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign				 -->%+.0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#80
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+.0d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign				 -->%+.0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#81
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.0d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0.0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#82
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.0d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0.0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#83
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% .0d<--\n", 42);
// 	my_l = ft_printf("MINE:	space				 -->% .0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#84
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% .0d<--\n", -42);
// 	my_l = ft_printf("MINE:	space				 -->% .0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#85
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0.0d<--\n", 42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0.0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#86
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0.0d<--\n", -42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0.0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#87
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.0d<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%0.0d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#88
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.0d<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%0.0d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#89
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#90
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#91
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- .0d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- .0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#92
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#93
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#94
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% .0d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% .0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#95
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#96
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%0.0d<--\n", 0);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// /******************************************************************
// ***				PRECISION && WIDTH SPECIFIERS					***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||PRECISION && WIDTH SPECIFIERS||||||||||\n\n");

// //	#97
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#98
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#99
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#100
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#101
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#102
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#103
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign				 -->%+5.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#104
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign				 -->%+5.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#105
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#106
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#107
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	space				 -->% 5.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#108
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	space				 -->% 5.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#109
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#110
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#111
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.10d<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%05.10d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#112
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.10d<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%05.10d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#113
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-10.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-10.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#114
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-10.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-10.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#115
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+10.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+10.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#116
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+10.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+10.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#117
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 10.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 10.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#118
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 10.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 10.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#119
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+10.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign				 -->%+10.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#120
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+10.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign				 -->%+10.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#121
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+010.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+010.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#122
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+010.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+010.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#123
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 10.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	space				 -->% 10.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#124
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 10.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	space				 -->% 10.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#125
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 010.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 010.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#126
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 010.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 010.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#127
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%010.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%010.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#128
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%010.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%010.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#129
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#130
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#131
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#132
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#133
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#134
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#135
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign				 -->%+5.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#136
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign				 -->%+5.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#137
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#138
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#139
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	space				 -->% 5.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#140
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	space				 -->% 5.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#141
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#142
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#143
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.5d<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%05.5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#144
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.5d<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%05.5d<--\n", -42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#145
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#146
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#147
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#148
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+5.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#149
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#150
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% 5.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#151
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#152
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.10d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05.10d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#153
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-10.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-10.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#154
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+10.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+10.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#155
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 10.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 10.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#156
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+10.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+10.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#157
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+010.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+010.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#158
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 10.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% 10.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#159
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 010.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 010.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#160
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%010.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%010.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#161
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#162
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#163
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#164
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+5.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#165
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#166
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% 5.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#167
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#168
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.5d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05.5d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#169
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#170
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#171
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#172
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+5.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign				 -->%+5.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#173
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+05.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#174
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% 5.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	space				 -->% 5.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#175
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 05.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	space & zero			 -->% 05.0d<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#176
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.0d<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05.0d<--\n", 0);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);


// /******************************************************************
// ***							len_mod_z TESTS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||LEN_MOD_Z TESTS||||||||||\n\n");

// //	#177
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zx%zx<--\n", 0, MAX_ULLINT);
// 	my_l = ft_printf("MINE:						 -->%zx%zx<--\n", 0, MAX_ULLINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#178
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zd<--\n", MAX_LLINT);
// 	my_l = ft_printf("MINE:						 -->%zd<--\n", MAX_LLINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#179
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zi%zi<--\n", 0, 42);
// 	my_l = ft_printf("MINE:						 -->%zi%zi<--\n", 0, 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#180
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zi<--\n", MAX_LLINT);
// 	my_l = ft_printf("MINE:						 -->%zi<--\n", MAX_LLINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#181
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zu%zu<--\n", 0, MAX_ULLINT);
// 	my_l = ft_printf("MINE:						 -->%zu%zu<--\n", 0, MAX_ULLINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#182
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zo<--\n", MAX_ULLINT);
// 	my_l = ft_printf("MINE:						 -->%zo<--\n", MAX_ULLINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#183
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zx<--\n", MAX_ULLINT);
// 	my_l = ft_printf("MINE:						 -->%zx<--\n", MAX_ULLINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#184
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zX<--\n", MAX_ULLINT);
// 	my_l = ft_printf("MINE:						 -->%zX<--\n", MAX_ULLINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#185
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zO<--\n", MAX_USINT);
// 	my_l = ft_printf("MINE:						 -->%zO<--\n", MAX_USINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#186
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zU<--\n", MAX_USINT);
// 	my_l = ft_printf("MINE:						 -->%zU<--\n", MAX_USINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#187
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:						 -->%zD<--\n", MAX_USINT);
// 	my_l = ft_printf("MINE:						 -->%zD<--\n", MAX_USINT);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// /******************************************************************
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// ||||||||||||||||||||||					|||||||||||||||||||||||||||
// ||||||||||||||||||||||		cs_lc_s		|||||||||||||||||||||||||||
// ||||||||||||||||||||||					|||||||||||||||||||||||||||
// ******************************************************************/

// /******************************************************************
// ***				NO WIDTH OR PREC SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||NO WIDTH OR PREC SPECIFERS||||||||||\n\n");

// //	#188
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	jleft				 -->%-s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#189
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#190
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#191
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	sign				 -->%+s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#192
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#193
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	space				 -->% s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#194
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#195
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	zero				 -->%0s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#196
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-s<--\n", "J");
// 	my_l = ft_printf("MINE:	jleft				 -->%-s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#197
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+s<--\n", "J");
// 	my_l = ft_printf("MINE:	jleft & sign			 -->%-+s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#198
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft & space			 -->%- s<--\n", "J");
// 	my_l = ft_printf("MINE:	jleft & space			 -->%- s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#199
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign				 -->%+s<--\n", "J");
// 	my_l = ft_printf("MINE:	sign				 -->%+s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#200
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	sign & zero			 -->%+0s<--\n", "J");
// 	my_l = ft_printf("MINE:	sign & zero			 -->%+0s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#201
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space				 -->% s<--\n", "J");
// 	my_l = ft_printf("MINE:	space				 -->% s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#202
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	space & zero			 -->% 0s<--\n", "J");
// 	my_l = ft_printf("MINE:	space & zero			 -->% 0s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#203
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0s<--\n", "J");
// 	my_l = ft_printf("MINE:	zero				 -->%0s<--\n", "J");
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// /******************************************************************
// ***						WIDTH SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||WIDTH SPECIFERS||||||||||\n\n");

// //	#204
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	jleft				 -->%-5s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%5s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:					 -->%5s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#213
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-25s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	jleft				 -->%-25s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#213
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%25s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:					 -->%25s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#222
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5s<--\n", "J");
// 	my_l = ft_printf("MINE:	jleft				 -->%-5s<--\n", "J");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// // /******************************************************************
// // ***					PRECISION SPECIFIERS						***
// // *******************************************************************
// // ******************************************************************/

// // 	printf("||||||||||PRECISION SPECIFIERS||||||||||\n\n");

// //	#49
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.5s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	jleft				 -->%-.5s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#49
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%.5s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:					 -->%.5s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#50
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.25s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:	jleft				 -->%-.25s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#50
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%.19s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:					 -->%.19s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#50
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%.0s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:					 -->%.0s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#50
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.0s<--\n", "wubba lubba dub dub");
// 	my_l = ft_printf("MINE:		jleft			 -->%-.0s<--\n", "wubba lubba dub dub");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#50
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%.0s<--\n", "");
// 	my_l = ft_printf("MINE:					 -->%.0s<--\n", "");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// /******************************************************************
// ***					WIDTH & PRECISION SPECIFIERS				***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||WIDTH & PRECISION SPECIFIERS||||||||||\n\n");



// //	#1
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%25.5s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:					 -->%25.5s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#2
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-25.5s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:		jleft			 -->%-25.5s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#3
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%5.5s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:					 -->%5.5s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#4
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.25s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.25s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#5
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%3.5s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:					 -->%3.5s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#6
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-3.25s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:	jleft				 -->%-3.25s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#7
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%25.25s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:					 -->%25.25s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#8
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-25.25s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:	jleft				 -->%-25.25s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#9
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%5.0s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:					 -->%5.0s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#10
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.0s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.0s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#11
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->%25.0s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:					 -->%25.0s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#12
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-25.0s<--\n", "wubba lubba dub dub.");
// 	my_l = ft_printf("MINE:	jleft				 -->%-25.0s<--\n", "wubba lubba dub dub.");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);



// //	#1
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%c<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%c<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#1
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%5c<--\n",0 );
// 	my_l = ft_printf("MINE:	jleft				 -->%5c<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#1
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5c<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5c<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 		//	#1
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.c<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.c<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);


// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->{%s}<--\n", 0);
// 	my_l = ft_printf("MINE:					 -->{%s}<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);


// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:					 -->{%s}<--\n", "");
// 	my_l = ft_printf("MINE:					 -->{%s}<--\n", "");
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);




// 	printf("42FC TEST #127\n");
// 	actual_l = printf("ACTUAL:					 -->%5d<--\n", 42);
// 	my_l = ft_printf("MINE:					 -->%5d<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("42FC TEST #139\n");
// 	actual_l = printf("ACTUAL:					 -->%hd<--\n", 32768);
// 	my_l = ft_printf("MINE:					 -->%hd<--\n", 32768);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("42FC TEST #142\n");
// 	actual_l = printf("ACTUAL:					 -->%hhd<--\n", 128);
// 	my_l = ft_printf("MINE:					 -->%hhd<--\n", 128);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("42FC TEST #144\n");
// 	actual_l = printf("ACTUAL:					 -->%hhd<--\n", -129);
// 	my_l = ft_printf("MINE:					 -->%hhd<--\n", -129);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("42FC TEST #150\n");
// 	actual_l = printf("ACTUAL:					 -->%lld<--\n", -9223372036854775808);
// 	my_l = ft_printf("MINE:					 -->%lld<--\n", -9223372036854775808);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("42FC TEST #163\n");
// 	actual_l = printf("ACTUAL:					 -->%.2d<--\n", 4242);
// 	my_l = ft_printf("MINE:					 -->%.2d<--\n", 4242);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("42FC TEST #165\n");
// 	actual_l = printf("ACTUAL:					 -->%10.5d<--\n", 4242);
// 	my_l = ft_printf("MINE:					 -->%10.5d<--\n", 4242);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("42FC TEST #176\n");
// 	actual_l = printf("ACTUAL:					 -->@moulitest: %5.d %5.0d<--\n", 0, 0);
// 	my_l = ft_printf("MINE:					 -->@moulitest: %5.d %5.0d<--\n", 0, 0);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);



// /******************************************************************
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// ||||||||||||||||||||||					|||||||||||||||||||||||||||
// ||||||||||||||||||||||		cs_lc_o		|||||||||||||||||||||||||||
// ||||||||||||||||||||||					|||||||||||||||||||||||||||
// ******************************************************************/

// /******************************************************************
// ***				NO WIDTH OR PREC SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||NO WIDTH OR PREC SPECIFERS||||||||||\n\n");

// //	#1
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0o<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%0o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound				 -->%#o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#0o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#0o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#17
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#24
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0o<--\n", -42);
// 	my_l = ft_printf("MINE:	zero				 -->%0o<--\n", -42);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// //	#24
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%###0o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%###0o<--\n", 0);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// /******************************************************************
// ***						WIDTH SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||WIDTH SPECIFERS||||||||||\n\n");

// //	#25
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#39
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05o<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%05o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound				 -->%#o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#05o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#05o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#41
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#48
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05o<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound				 -->%#o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#0o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#0o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#6o<--\n", 2500);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#6o<--\n", 2500);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%-#6o<--\n", 2500);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%-#6o<--\n", 2500);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);


// /******************************************************************
// ***					PRECISION SPECIFIERS						***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||PRECISION SPECIFIERS||||||||||\n\n");

// //	#49
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#63
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%0.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound				 -->%#.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#0.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#0.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#65
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#72
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%0.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound				 -->%#.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#0.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#0.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);


// //	#73
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.0o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.0o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15!!!!!!!!!!!!!!!!!!!!!
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#.o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound				 -->%#.o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15!!!!!!!!!!!!!!!!!!!!!!!!
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#.o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#.o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15!!!!!!!!!!!!!!!!!!!!!!!!
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#0.o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#0.o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#87
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.0o<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%0.0o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#89
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-.0o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-.0o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#96
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%0.0o<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%0.0o<--\n", 0);
// 	printf("(%d, %d)\n\n\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#.o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound				 -->%#.o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#.o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#.o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#0.o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#0.o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// /******************************************************************
// ***				PRECISION && WIDTH SPECIFIERS					***
// *******************************************************************
// ******************************************************************/

// 	printf("||||||||||PRECISION && WIDTH SPECIFIERS||||||||||\n\n");

// //	#97
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.10o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.10o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#111
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.10o<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%05.10o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#5.10o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound				 -->%#5.10o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#5.10o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#5.10o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#05.10o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#05.10o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#113
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-10.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-10.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#127
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%010.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%010.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#10.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound				 -->%#10.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#10.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#10.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#010.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#010.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#129
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#143
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	zero				 -->%05.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#5.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound				 -->%#5.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#5.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#5.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#05.5o<--\n", 42);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#05.5o<--\n", 42);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#145
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.10o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.10o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#152
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.10o<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05.10o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#5.10o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound				 -->%#5.10o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#5.10o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#5.10o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#05.10o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#05.10o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#153
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-10.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-10.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#160
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%010.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%010.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#161
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#168
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.5o<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05.5o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#169
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft				 -->%-5.0o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft				 -->%-5.0o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#176
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	zero				 -->%05.0o<--\n", 0);
// 	my_l = ft_printf("MINE:	zero				 -->%05.0o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound				 -->%#5.0o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound				 -->%#5.0o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	jleft && pound			 -->%-#5.0o<--\n", 0);
// 	my_l = ft_printf("MINE:	jleft && pound			 -->%-#5.0o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#05.0o<--\n", 0);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#05.0o<--\n", 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%#6o<--\n", 2500);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%#6o<--\n", 2500);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#15
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:	pound && zero			 -->%-#6o<--\n", 2500);
// 	my_l = ft_printf("MINE:	pound && zero			 -->%-#6o<--\n", 2500);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);


// //	#25
// 	printf("Test #%d\n", i++);
// 	printf("precision less #\n");
// 	actual_l = printf("ACTUAL:	jleft				 -->%.2x<--\n", 2400);
// 	my_l = ft_printf("MINE:	jleft				 -->%.2x<--\n", 2400);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#25
// 	printf("Test #%d\n", i++);
// 	printf("width less #\n");
// 	actual_l = printf("ACTUAL:	jleft				 -->%2x<--\n", 2400);
// 	my_l = ft_printf("MINE:	jleft				 -->%2x<--\n", 2400);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// //	#25
// 	printf("Test #%d\n", i++);
// 	printf("width && precision less #\n");
// 	actual_l = printf("ACTUAL:	jleft				 -->%2.2x<--\n", 2400);
// 	my_l = ft_printf("MINE:	jleft				 -->%2.2x<--\n", 2400);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#25
// 	printf("Test #%d\n", i++);
// 	printf("width more && precision less #\n");
// 	actual_l = printf("ACTUAL:	jleft				 -->%6.2x<--\n", 2400);
// 	my_l = ft_printf("MINE:	jleft				 -->%6.2x<--\n", 2400);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#25
// 	printf("Test #%d\n", i++);
// 	printf("width less && precision more #\n");
// 	actual_l = printf("ACTUAL:						 -->%#2.6x<--\n", 2400);
// 	my_l = ft_printf("MINE:						 -->%#2.6x<--\n", 2400);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	//	#25
// 	printf("Test #%d\n", i++);
// 	printf("width less && precision more #\n");
// 	actual_l = printf("ACTUAL:	jleft				 -->%#-08x<--\n", 2400);
// 	my_l = ft_printf("MINE:	jleft				 -->%#-08x<--\n", 2400);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);
	
// 	//	#25
// 	printf("Test #%d\n", i++);
// 	printf("width less && precision more #\n");
// 	actual_l = printf("@moulitest: %#5.x %#5.0x\n", 0, 0);
// 	my_l = ft_printf("@moulitest: %#5.x %#5.0x\n", 0, 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l);
	
// 	//	#25
// 	printf("Test #%d\n", i++);
// 	printf("width less && precision more #\n");
// 	actual_l = printf("@moulitest: %05.x %#5.0x\n", 0, 0);
// 	my_l = ft_printf("@moulitest: %05.x %#5.0x\n", 0, 0);
// 	printf("(%d, %d)\n\n", actual_l, my_l);


#include <locale.h>

setlocale(LC_ALL, "en_US");

// // int not_i = 20;//2097151 is MAX if only printing one char per while loop.
// // int unihex = 0x1F499;//0x21 is the start
// // while (not_i--)
// // {
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	", unihex);
// // 	unihex++;
// // 	ft_printf("%C	\n", unihex);
// // 	unihex++;
// // }

// //POINTER TESTS

char *str;

str = malloc(sizeof(char) * 10);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%p<--\n", NULL);
// 	my_l = ft_printf("MINE:				 -->%p<--\n", NULL);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%-p<--\n", str);
// 	my_l = ft_printf("MINE:				 -->%-p<--\n", str);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%5p<--\n", str);
// 	my_l = ft_printf("MINE:				 -->%5p<--\n", str);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%-5p<--\n", str);
// 	my_l = ft_printf("MINE:				 -->%-5p<--\n", str);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%15p<--\n", str);
// 	my_l = ft_printf("MINE:				 -->%15p<--\n", str);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%-15p<--\n", str);
// 	my_l = ft_printf("MINE:				 -->%-15p<--\n", str);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%lX<--\n", 4294967296);
// 	my_l = ft_printf("MINE:				 -->%llX<--\n", 4294967296);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%5lu<--\n", 4294967295);
// 	my_l = ft_printf("MINE:				 -->%5lu<--\n", 4294967295);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%lu<--\n", 4294967295);
// 	my_l = ft_printf("MINE:				 -->%U<--\n", 4294967295);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%u<--\n", -1);
// 	my_l = ft_printf("MINE:				 -->%u<--\n", -1);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%u<--\n", 4294967296);
// 	my_l = ft_printf("MINE:				 -->%u<--\n", 4294967296);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);
	
// 	printf("Test #%d\n", i++);
// 	actual_l = printf("ACTUAL:				 -->%hhD %hhD<--\n", 0, MAX_USINT);
// 	my_l = ft_printf("MINE:				 -->%hhD %hhD<--\n", 0, MAX_USINT);
// 	printf("(%d, %d)\n\n", actual_l, my_l + 2);
	

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->%hhu, %hhu<--\n", 0, MAX_UCHAR + 2);
	// my_l = ft_printf("MINE:				 -->%hhu, %hhu<--\n", 0, MAX_UCHAR + 2);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->%s%d%p%%%S%lD%i%o%O%u%llU%x%X%c%C<--\n", "bonjour", 42, &str, L"暖炉", 9223372036854775807, 42, 42, 42, 100000, 7777777, 42, 42, 'c', L'플');
	// my_l = ft_printf("MINE:				 -->%s%d%p%%%S%D%i%o%O%u%U%x%X%c%C<--\n", "bonjour", 42, &str, L"暖炉", 9223372036854775807, 42, 42, 42, 100000, 7777777, 42, 42, 'c', L'플');
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->%s%d%p%%%S%D%i%o<--\n", "bonjour", 42, &str, L"暖炉", 9223372036854775807, 42, 42);
	// my_l = ft_printf("MINE:				 -->%s%d%p%%%S%D%i%o<--\n", "bonjour", 42, &str, L"暖炉", 9223372036854775807, 42, 42);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->%d%p%%%S%D%i%o<--\n", 42, &str, L"暖炉", 9223372036854775807, 42, 42);
	// my_l = ft_printf("MINE:				 -->%d%p%S%D%i%o<--\n", 42, &str, L"€€", 9223372036854775807, 42, 42);

	// my_l = ft_printf("MINE:				 -->%d%p%%%S%D%i%o<--\n", 42, &str, L"€€", 9223372036854775807, 42, 42);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// my_l = ft_printf("MINE:				 -->%d%p%%%D%i%o<--\n", 42, &str, 9223372036854775807, 42, 42);
	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->%o%O%u%U%x%X<--\n", 42, 42, 100000, 7777777, 42, 42);
	// my_l = ft_printf("MINE:				 -->%o%O%u%U%x%X<--\n", 42, 42, 100000, 7777777, 42, 42);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);
	// my_l = ft_printf("MINE:				 -->%p%%%S%D%i%o<--\n", &str, L"€€", 9223372036854775807, 42, 42);
	// printf("Test #%d\n", i++);
	// actual_l = ft_printf("ACTUAL:				 -->%s	%d	%p	%%	%S	%D	%i	%o	%O	%u	%U	%x	%X	%c	%C<--\n", "bonjour", 42, &str, L"暖炉", 9223372036854775807, 42, 42, 42, 100000, 18446744073709551615, 42, 42, 'c', L'플');
	// my_l = printf("MINE:				 -->%s	%d	%p	%%	%S	%D	%i	%o	%O	%u	%U	%x	%X	%c	%C<--\n", "bonjour", 42, &str, L"暖炉", 9223372036854775807, 42, 42, 42, 100000, 18446744073709551615, 42, 42, 'c', L'플');
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->%.p, %.0p<--\n", 0, 0);
	// my_l = ft_printf("MINE:				 -->%.p, %.0p<--\n", 0, 0);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->{%05.c}<--\n", 0);
	// my_l = ft_printf("MINE:				 -->{%05.c}<--\n", 0);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->{%05.s}<--\n", 0);
	// my_l = ft_printf("MINE:				 -->{%05.s}<--\n", 0);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->{%05p}<--\n", 0);
	// my_l = ft_printf("MINE:				 -->{%05p}<--\n", 0);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->{%05.Z}<--\n", 0);
	// my_l = ft_printf("MINE:				 -->{%05.Z}<--\n", 0);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->{%#.5x}<--\n", 1);
	// my_l = ft_printf("MINE:				 -->{%#.5x}<--\n", 1);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:				 -->{%-13p}<--\n", &str);
	my_l = ft_printf("MINE:				 -->{%-13p}<--\n", &str);
	printf("(%d, %d)\n\n", actual_l, my_l + 2);




	// printf("Test #%d\n", i++);
	// actual_l = printf("ACTUAL:				 -->%o<--\n", 42);
	// my_l = ft_printf("MINE:				 -->%o<--\n", 42);
	// printf("(%d, %d)\n\n", actual_l, my_l + 2);

	return (0);
}
