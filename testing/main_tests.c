/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:39:51 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/13 17:06:02 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int my_l;
	int	actual_l;
	// len = ft_printf("My Printf:	-->%-10i<--\n", -42);
	// 	     printf("Acutal Printf:	-->%-10i<--\n", -42);

/******************************************************************
***				NO WIDTH OR PREC SPECIFIERS						***
*******************************************************************
******************************************************************/

	printf("||||||||||NO WIDTH OR PREC SPECIFERS||||||||||\n\n");

	actual_l = printf("ACTUAL:	jleft -->%-d<--\n", 42);
	my_l = ft_printf("MINE:	jleft -->%-d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft -->%-d<--\n", -42);
	my_l = ft_printf("MINE:	jleft -->%-d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);
	
	actual_l = printf("ACTUAL:	jleft & sign -->%-+d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign -->%-+d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	jleft & sign -->%-+d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign -->%-+d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	jleft & space -->%- d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space -->%- d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 28, my_l - 26);

	actual_l = printf("ACTUAL:	jleft & space -->%- d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space -->%- d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 28, my_l - 26);

	actual_l = printf("ACTUAL:	sign -->%+d<--\n", 42);
	my_l = ft_printf("MINE:	sign -->%+d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	sign -->%+d<--\n", -42);
	my_l = ft_printf("MINE:	sign -->%+d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	sign & zero -->%+0d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero -->%+0d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 26, my_l - 24);

	actual_l = printf("ACTUAL:	sign & zero -->%+0d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero -->%+0d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 26, my_l - 24);

	actual_l = printf("ACTUAL:	space -->% d<--\n", 42);
	my_l = ft_printf("MINE:	space -->% d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	space -->% d<--\n", -42);
	my_l = ft_printf("MINE:	space -->% d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	space & zero -->% 0d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero -->% 0d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	space & zero -->% 0d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero -->% 0d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	zero -->%0d<--\n", 42);
	my_l = ft_printf("MINE:	zero -->%0d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	zero -->%0d<--\n", -42);
	my_l = ft_printf("MINE:	zero -->%0d<--\n", -42);
	printf("(%d, %d)\n\n\n\n", actual_l - 19, my_l - 17);

/******************************************************************
***						WIDTH SPECIFIERS						***
*******************************************************************
******************************************************************/

	printf("||||||||||WIDTH SPECIFERS||||||||||\n\n");

	actual_l = printf("ACTUAL:	jleft -->%-5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft -->%-5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft -->%-5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft -->%-5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft & sign -->%-+5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign -->%-+5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	jleft & sign -->%-+5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign -->%-+5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	jleft & space -->%- 5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space -->%- 5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 28, my_l - 26);

	actual_l = printf("ACTUAL:	jleft & space -->%- 5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space -->%- 5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 28, my_l - 26);

	actual_l = printf("ACTUAL:	sign -->%+5d<--\n", 42);
	my_l = ft_printf("MINE:	sign -->%+5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	sign -->%+5d<--\n", -42);
	my_l = ft_printf("MINE:	sign -->%+5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	sign & zero -->%+05d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero -->%+05d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 26, my_l - 24);

	actual_l = printf("ACTUAL:	sign & zero -->%+05d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero -->%+05d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 26, my_l - 24);

	actual_l = printf("ACTUAL:	space -->% 5d<--\n", 42);
	my_l = ft_printf("MINE:	space -->% 5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	space -->% 5d<--\n", -42);
	my_l = ft_printf("MINE:	space -->% 5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	space & zero -->% 05d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero -->% 05d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	space & zero -->% 05d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero -->% 05d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	zero -->%05d<--\n", 42);
	my_l = ft_printf("MINE:	zero -->%05d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	zero -->%05d<--\n", -42);
	my_l = ft_printf("MINE:	zero -->%05d<--\n", -42);
	printf("(%d, %d)\n\n\n\n", actual_l - 19, my_l - 17);

/******************************************************************
***					PRECISION SPECIFIERS						***
*******************************************************************
******************************************************************/

	printf("||||||||||PRECISION SPECIFIERS||||||||||\n\n");

	actual_l = printf("ACTUAL:	jleft -->%-.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft -->%-.0d<--\n", 0);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft -->%-.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft -->%-.0d<--\n", 0);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft -->%-.d<--\n", 42);
	my_l = ft_printf("MINE:	jleft -->%-.d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft -->%-.d<--\n", -42);
	my_l = ft_printf("MINE:	jleft -->%-.d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft -->%-.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft -->%-.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft -->%-.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft -->%-.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	jleft & sign -->%-+.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & sign -->%-+.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	jleft & sign -->%-+.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & sign -->%-+.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	jleft & space -->%- .5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft & space -->%- .5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 28, my_l - 26);

	actual_l = printf("ACTUAL:	jleft & space -->%- .5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft & space -->%- .5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 28, my_l - 26);

	actual_l = printf("ACTUAL:	sign -->%+.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign -->%+.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	sign -->%+.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign -->%+.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	sign & zero -->%+0.5d<--\n", 42);
	my_l = ft_printf("MINE:	sign & zero -->%+0.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 26, my_l - 24);

	actual_l = printf("ACTUAL:	sign & zero -->%+0.5d<--\n", -42);
	my_l = ft_printf("MINE:	sign & zero -->%+0.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 26, my_l - 24);

	actual_l = printf("ACTUAL:	space -->% .5d<--\n", 42);
	my_l = ft_printf("MINE:	space -->% .5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	space -->% .5d<--\n", -42);
	my_l = ft_printf("MINE:	space -->% .5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	actual_l = printf("ACTUAL:	space & zero -->% 0.5d<--\n", 42);
	my_l = ft_printf("MINE:	space & zero -->% 0.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	space & zero -->% 0.5d<--\n", -42);
	my_l = ft_printf("MINE:	space & zero -->% 0.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 27, my_l - 25);

	actual_l = printf("ACTUAL:	zero -->%0.5d<--\n", 42);
	my_l = ft_printf("MINE:	zero -->%0.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);

	actual_l = printf("ACTUAL:	zero -->%0.5d<--\n", -42);
	my_l = ft_printf("MINE:	zero -->%0.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 19, my_l - 17);


/******************************************************************
***				PRECISION && WIDTH SPECIFIERS					***
*******************************************************************
******************************************************************/

	printf("||||||||||PRECISION && WIDTH SPECIFIERS||||||||||\n\n");

	//#1
	actual_l = printf("ACTUAL:	jleft -->%-10.0d<--\n", 42);
	my_l = ft_printf("MINE:	jleft -->%-10.0d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#2
	actual_l = printf("ACTUAL:	jleft -->%-10.0d<--\n", 0);
	my_l = ft_printf("MINE:	jleft -->%-10.0d<--\n", 0);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#3
	actual_l = printf("ACTUAL:	jleft -->%-10.d<--\n", 0);
	my_l = ft_printf("MINE:	jleft -->%-10.d<--\n", 0);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#4
	actual_l = printf("ACTUAL:	jleft -->%-10.d<--\n", -42);
	my_l = ft_printf("MINE:	jleft -->%-10.d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#5
	actual_l = printf("ACTUAL:	jleft -->%-5.10d<--\n", -42);
	my_l = ft_printf("MINE:	jleft -->%-5.10d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#6
	actual_l = printf("ACTUAL:	jleft -->%-5.10d<--\n", 42);
	my_l = ft_printf("MINE:	jleft -->%-5.10d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#7
	actual_l = printf("ACTUAL:	jleft -->%-10.5d<--\n", 42);
	my_l = ft_printf("MINE:	jleft -->%-10.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#8
	actual_l = printf("ACTUAL:	jleft -->%-10.5d<--\n", -42);
	my_l = ft_printf("MINE:	jleft -->%-10.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#9
	actual_l = printf("ACTUAL:	space -->% 5.10d<--\n", -42);
	my_l = ft_printf("MINE:	space -->% 5.10d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#10
	actual_l = printf("ACTUAL:	space -->% 5.10d<--\n", 42);
	my_l = ft_printf("MINE:	space -->% 5.10d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#11
	actual_l = printf("ACTUAL:	space -->% 10.5d<--\n", 42);
	my_l = ft_printf("MINE:	space -->% 10.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#12
	actual_l = printf("ACTUAL:	space -->% 10.5d<--\n", -42);
	my_l = ft_printf("MINE:	space -->% 10.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#13
	actual_l = printf("ACTUAL:	sign -->%+10.0d<--\n", 42);
	my_l = ft_printf("MINE:	sign -->%+10.0d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#14
	actual_l = printf("ACTUAL:	sign -->%+10.0d<--\n", 0);
	my_l = ft_printf("MINE:	sign -->%+10.0d<--\n", 0);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#15
	actual_l = printf("ACTUAL:	zero -->%010.5d<--\n", 42);
	my_l = ft_printf("MINE:	zero -->%010.5d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#16
	actual_l = printf("ACTUAL:	zero -->%010.5d<--\n", -42);
	my_l = ft_printf("MINE:	zero -->%010.5d<--\n", -42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#17
	actual_l = printf("ACTUAL:	space && sign -->% +10.0d<--\n", 42);
	my_l = ft_printf("MINE:	space && sign -->% +10.0d<--\n", 42);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

	//#18
	actual_l = printf("ACTUAL:	space && sign -->% +10.0d<--\n", 0);
	my_l = ft_printf("MINE:	space && sign -->% +10.0d<--\n", 0);
	printf("(%d, %d)\n\n", actual_l - 20, my_l - 18);

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
