/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:39:51 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/16 14:08:38 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int my_l;
	int	actual_l;
	int	i = 1;
	// len = ft_printf("My Printf:	-->%-10i<--\n", -42);
	// 	     printf("Acutal Printf:	-->%-10i<--\n", -42);

/******************************************************************
***				NO WIDTH OR PREC SPECIFIERS						***
*******************************************************************
******************************************************************/

	printf("||||||||||NO WIDTH OR PREC SPECIFERS||||||||||\n\n");

//	#1
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-d<--\n", 42);
	my_l = ft_printf("MINE:	jleft				 -->%-d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#2
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-d<--\n", -42);
	my_l = ft_printf("MINE:	jleft				 -->%-d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#3
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#4
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#5
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#6
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#7
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+d<--\n", 42);
	my_l = ft_printf("MINE:	sign				 -->%+d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#8
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+d<--\n", -42);
	my_l = ft_printf("MINE:	sign				 -->%+d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#9
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#10
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#11
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% d<--\n", 42);
	my_l = ft_printf("MINE:	space				 -->% d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#12
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% d<--\n", -42);
	my_l = ft_printf("MINE:	space				 -->% d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#13
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero			 -->% 0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#14
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero			 -->% 0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#15
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0d<--\n", 42);
	my_l = ft_printf("MINE:	zero				 -->%0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#16
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0d<--\n", -42);
	my_l = ft_printf("MINE:	zero				 -->%0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#17
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#18
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#19
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#20
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#21
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#22
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#23
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#24
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%0d<--\n", 0);
	printf("					   (%d, %d)\n\n\n\n", actual_l, my_l + 2);

/******************************************************************
***						WIDTH SPECIFIERS						***
*******************************************************************
******************************************************************/

	printf("||||||||||WIDTH SPECIFERS||||||||||\n\n");

//	#25
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft				 -->%-5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#26
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft				 -->%-5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#27
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#28
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#29
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#30
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#31
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5d<--\n", 42);
	my_l = ft_printf("MINE:	sign				 -->%+5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#32
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5d<--\n", -42);
	my_l = ft_printf("MINE:	sign				 -->%+5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#33
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#34
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#35
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5d<--\n", 42);
	my_l = ft_printf("MINE:	space				 -->% 5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#36
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5d<--\n", -42);
	my_l = ft_printf("MINE:	space				 -->% 5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#37
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero			 -->% 05d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#38
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero			 -->% 05d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#39
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05d<--\n", 42);
	my_l = ft_printf("MINE:	zero				 -->%05d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#40
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05d<--\n", -42);
	my_l = ft_printf("MINE:	zero				 -->%05d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#41
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#42
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#43
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#44
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#45
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#46
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% 5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#47
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 05d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#48
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%05d<--\n", 0);
	printf("					   (%d, %d)\n\n\n\n", actual_l, my_l + 2);

/******************************************************************
***					PRECISION SPECIFIERS						***
*******************************************************************
******************************************************************/

	printf("||||||||||PRECISION SPECIFIERS||||||||||\n\n");

//	#49
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft				 -->%-.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#50
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft				 -->%-.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#51
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#52
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#53
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- .5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- .5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#54
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- .5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- .5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#55
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign				 -->%+.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#56
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign				 -->%+.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#57
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#58
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#59
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% .5d<--\n", 42);
	my_l = ft_printf("MINE:	space				 -->% .5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#60
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% .5d<--\n", -42);
	my_l = ft_printf("MINE:	space				 -->% .5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#61
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0.5d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero			 -->% 0.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#62
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0.5d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero			 -->% 0.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#63
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0.5d<--\n", 42);
	my_l = ft_printf("MINE:	zero				 -->%0.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#64
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0.5d<--\n", -42);
	my_l = ft_printf("MINE:	zero				 -->%0.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#65
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#66
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#67
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- .5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- .5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#68
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+.5d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#69
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.5d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#70
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% .5d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% .5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#71
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0.5d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 0.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#72
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0.5d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%0.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#73
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-.0d<--\n", 42);
	my_l = ft_printf("MINE:	jleft				 -->%-.0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#74
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-.0d<--\n", -42);
	my_l = ft_printf("MINE:	jleft				 -->%-.0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#75
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.0d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#76
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.0d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#77
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- .0d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- .0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#78
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- .0d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- .0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#79
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+.0d<--\n", 42);
	my_l = ft_printf("MINE:	sign				 -->%+.0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#80
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+.0d<--\n", -42);
	my_l = ft_printf("MINE:	sign				 -->%+.0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#81
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.0d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0.0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#82
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.0d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0.0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#83
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% .0d<--\n", 42);
	my_l = ft_printf("MINE:	space				 -->% .0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#84
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% .0d<--\n", -42);
	my_l = ft_printf("MINE:	space				 -->% .0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#85
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0.0d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero			 -->% 0.0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#86
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0.0d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero			 -->% 0.0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#87
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0.0d<--\n", 42);
	my_l = ft_printf("MINE:	zero				 -->%0.0d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#88
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0.0d<--\n", -42);
	my_l = ft_printf("MINE:	zero				 -->%0.0d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#89
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#90
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#91
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- .0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- .0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#92
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+.0d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#93
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+0.0d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+0.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#94
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% .0d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% .0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#95
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 0.0d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 0.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#96
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%0.0d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%0.0d<--\n", 0);
	printf("					   (%d, %d)\n\n\n\n", actual_l, my_l + 2);

/******************************************************************
***				PRECISION && WIDTH SPECIFIERS					***
*******************************************************************
******************************************************************/

	printf("||||||||||PRECISION && WIDTH SPECIFIERS||||||||||\n\n");

//	#97
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5.10d<--\n", 42);
	my_l = ft_printf("MINE:	jleft				 -->%-5.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#98
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5.10d<--\n", -42);
	my_l = ft_printf("MINE:	jleft				 -->%-5.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#99
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.10d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#100
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.10d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#101
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.10d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#102
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.10d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#103
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5.10d<--\n", 42);
	my_l = ft_printf("MINE:	sign				 -->%+5.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#104
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5.10d<--\n", -42);
	my_l = ft_printf("MINE:	sign				 -->%+5.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#105
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.10d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#106
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.10d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#107
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5.10d<--\n", 42);
	my_l = ft_printf("MINE:	space				 -->% 5.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#108
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5.10d<--\n", -42);
	my_l = ft_printf("MINE:	space				 -->% 5.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#109
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05.10d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero			 -->% 05.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#110
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05.10d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero			 -->% 05.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#111
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05.10d<--\n", 42);
	my_l = ft_printf("MINE:	zero				 -->%05.10d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#112
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05.10d<--\n", -42);
	my_l = ft_printf("MINE:	zero				 -->%05.10d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#113
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-10.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft				 -->%-10.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#114
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-10.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft				 -->%-10.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#115
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+10.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+10.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#116
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+10.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+10.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#117
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 10.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 10.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#118
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 10.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 10.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#119
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+10.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign				 -->%+10.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#120
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+10.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign				 -->%+10.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#121
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+010.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+010.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#122
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+010.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+010.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#123
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 10.5d<--\n", 42);
	my_l = ft_printf("MINE:	space				 -->% 10.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#124
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 10.5d<--\n", -42);
	my_l = ft_printf("MINE:	space				 -->% 10.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#125
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 010.5d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero			 -->% 010.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#126
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 010.5d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero			 -->% 010.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#127
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%010.5d<--\n", 42);
	my_l = ft_printf("MINE:	zero				 -->%010.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#128
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%010.5d<--\n", -42);
	my_l = ft_printf("MINE:	zero				 -->%010.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#129
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft				 -->%-5.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#130
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft				 -->%-5.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#131
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#132
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#133
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#134
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#135
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign				 -->%+5.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#136
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign				 -->%+5.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#137
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#138
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#139
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5.5d<--\n", 42);
	my_l = ft_printf("MINE:	space				 -->% 5.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#140
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5.5d<--\n", -42);
	my_l = ft_printf("MINE:	space				 -->% 5.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#141
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05.5d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero			 -->% 05.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#142
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05.5d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero			 -->% 05.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#143
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05.5d<--\n", 42);
	my_l = ft_printf("MINE:	zero				 -->%05.5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#144
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05.5d<--\n", -42);
	my_l = ft_printf("MINE:	zero				 -->%05.5d<--\n", -42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#145
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5.10d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-5.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#146
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.10d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#147
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.10d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#148
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5.10d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+5.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#149
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.10d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#150
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5.10d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% 5.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#151
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05.10d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 05.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#152
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05.10d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%05.10d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#153
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-10.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-10.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#154
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+10.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+10.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#155
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 10.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 10.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#156
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+10.5d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+10.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#157
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+010.5d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+010.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#158
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 10.5d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% 10.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#159
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 010.5d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 010.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#160
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%010.5d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%010.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#161
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-5.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#162
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#163
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.5d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#164
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5.5d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+5.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#165
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.5d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#166
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5.5d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% 5.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#167
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05.5d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 05.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#168
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05.5d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%05.5d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#169
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft				 -->%-5.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft				 -->%-5.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#170
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & sign			 -->%-+5.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & sign			 -->%-+5.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#171
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	jleft & space			 -->%- 5.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft & space			 -->%- 5.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#172
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign				 -->%+5.0d<--\n", 0);
	my_l = ft_printf("MINE:	sign				 -->%+5.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#173
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	sign & zero			 -->%+05.0d<--\n", 0);
	my_l = ft_printf("MINE:	sign & zero			 -->%+05.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#174
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space				 -->% 5.0d<--\n", 0);
	my_l = ft_printf("MINE:	space				 -->% 5.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#175
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	space & zero			 -->% 05.0d<--\n", 0);
	my_l = ft_printf("MINE:	space & zero			 -->% 05.0d<--\n", 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#176
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:	zero				 -->%05.0d<--\n", 0);
	my_l = ft_printf("MINE:	zero				 -->%05.0d<--\n", 0);
	printf("					   (%d, %d)\n\n\n\n", actual_l, my_l + 2);


/******************************************************************
***							len_mod_z TESTS						***
*******************************************************************
******************************************************************/

	printf("||||||||||LEN_MOD_Z TESTS||||||||||\n\n");

//	#177
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zd%zd<--\n", 0, 42);
	my_l = ft_printf("MINE:						 -->%zd%zd<--\n", 0, 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#178
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zd<--\n", MAX_LLINT);
	my_l = ft_printf("MINE:						 -->%zd<--\n", MAX_LLINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#179
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zi%zi<--\n", 0, 42);
	my_l = ft_printf("MINE:						 -->%zi%zi<--\n", 0, 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#180
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zi<--\n", MAX_LLINT);
	my_l = ft_printf("MINE:						 -->%zi<--\n", MAX_LLINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#181
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zu%zu<--\n", 0, MAX_ULLINT);
	my_l = ft_printf("MINE:						 -->%zu%zu<--\n", 0, MAX_ULLINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#182
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zo<--\n", MAX_ULLINT);
	my_l = ft_printf("MINE:						 -->%zo<--\n", MAX_ULLINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#183
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zx<--\n", MAX_ULLINT);
	my_l = ft_printf("MINE:						 -->%zx<--\n", MAX_ULLINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#184
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zX<--\n", MAX_ULLINT);
	my_l = ft_printf("MINE:						 -->%zX<--\n", MAX_ULLINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#185
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%z0<--\n", MAX_USINT);
	my_l = ft_printf("MINE:						 -->%z0<--\n", MAX_USINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#186
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zU<--\n", MAX_USINT);
	my_l = ft_printf("MINE:						 -->%zU<--\n", MAX_USINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

//	#187
	printf("Test #%d\n", i++);
	actual_l = printf("ACTUAL:						 -->%zD<--\n", MAX_USINT);
	my_l = ft_printf("MINE:						 -->%zD<--\n", MAX_USINT);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);







	printf("42FC TEST #127\n");
	actual_l = printf("ACTUAL:					 -->%5d<--\n", 42);
	my_l = ft_printf("MINE:					 -->%5d<--\n", 42);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

	printf("42FC TEST #139\n");
	actual_l = printf("ACTUAL:					 -->%hd<--\n", 32768);
	my_l = ft_printf("MINE:					 -->%hd<--\n", 32768);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

	printf("42FC TEST #142\n");
	actual_l = printf("ACTUAL:					 -->%hhd<--\n", 128);
	my_l = ft_printf("MINE:					 -->%hhd<--\n", 128);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

	printf("42FC TEST #144\n");
	actual_l = printf("ACTUAL:					 -->%hhd<--\n", -129);
	my_l = ft_printf("MINE:					 -->%hhd<--\n", -129);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

	printf("42FC TEST #150\n");
	actual_l = printf("ACTUAL:					 -->%lld<--\n", -9223372036854775808);
	my_l = ft_printf("MINE:					 -->%lld<--\n", -9223372036854775808);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

	printf("42FC TEST #163\n");
	actual_l = printf("ACTUAL:					 -->%.2d<--\n", 4242);
	my_l = ft_printf("MINE:					 -->%.2d<--\n", 4242);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

	printf("42FC TEST #165\n");
	actual_l = printf("ACTUAL:					 -->%10.5d<--\n", 4242);
	my_l = ft_printf("MINE:					 -->%10.5d<--\n", 4242);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

	printf("42FC TEST #176\n");
	actual_l = printf("ACTUAL:					 -->@moulitest: %5.d %5.0d<--\n", 0, 0);
	my_l = ft_printf("MINE:					 -->@moulitest: %5.d %5.0d<--\n", 0, 0);
	printf("					   (%d, %d)\n\n", actual_l, my_l + 2);

// 	printf("size of int is: %lu\n", sizeof(int));
// 	printf("size of long int is: %lu\n", sizeof(long int));
// 	printf("size of long long int is: %lu\n", sizeof(long long int));
// 	printf("size of short int is: %lu\n", sizeof(short int));
// 	printf("size of unsigned int is: %lu\n", sizeof(unsigned int));
// 	printf("size of unsigned long int is: %lu\n", sizeof(unsigned long int));
// 	printf("size of unsigned long long int is: %lu\n", sizeof(unsigned long long int));
// 	printf("size of unsigned short int is: %lu\n", sizeof(unsigned short int));
// 	printf("size of signed char is: %lu\n", sizeof(signed char));
// 	printf("size of unsigned char is: %lu\n", sizeof(unsigned char));
// 	printf("size of intmax_t is: %lu\n", sizeof(intmax_t));
// 	printf("size of uintmax_t is: %lu\n", sizeof(uintmax_t));
// 	printf("size of size_t is: %lu\n", sizeof(size_t));
// //	printf("size of wint_t is: %lu\n", sizeof(wint_t));
// 	printf("size of char* is: %lu\n", sizeof(char*));
// 	printf("size of wchar_t* is: %lu\n", sizeof(wchar_t*));
// 	printf("size of void* is: %lu\n", sizeof(void*));

	// printf("%20ld\n", 5000000000);
	// printf("%20lD\n", 5000000000);

	// printf("%d\n", len);
	// printf ("MINE:	Characters: %c %c \n", 'a', 65);
	// ft_printf ("ACTUAL:	Characters: %c %c \n", 'a', 65);
	// printf ("MINE:	Decimals: %d %ld\n", 1977, 650000L);
	// ft_printf ("ACTUAL:	Decimals: %d %ld\n", 1977, 650000L);
	// printf ("MINE:	Preceding with blanks: %10d \n", 1977);
	// ft_printf ("ACTUAL:	Preceding with blanks: %10d \n", 1977);
	// printf ("MINE:	Preceding with zeros: %010d \n", 1977);
	// ft_printf ("ACTUAL:	Preceding with zeros: %010d \n", 1977);
	// printf ("MINE:	Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// ft_printf ("ACTUAL:	Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// printf ("MINE:	Width trick: %*d \n", 5, 10);
	// ft_printf ("ACTUAL:	Width trick: %*d \n", 5, 10);
	// printf ("MINE:	%s \n", "A string");
	// ft_printf ("ACTUAL:	%s \n", "A string");
	return (0);
}
