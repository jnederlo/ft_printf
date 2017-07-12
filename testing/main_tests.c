/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:39:51 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/12 11:11:18 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int len;

	len = ft_printf("My Printf:	% +5d\n", 25);
	len =    printf("Acutal Printf:	% +5d\n", 25);
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
	// printf ("ACTUAL:	Characters: %c %c \n", 'a', 65);
	// ft_printf ("MINE:	Characters: %c %c \n", 'a', 65);
	// printf ("ACTUAL:	Decimals: %d %ld\n", 1977, 650000L);
	// ft_printf ("MINE:	Decimals: %d %ld\n", 1977, 650000L);
	// printf ("ACTUAL:	Preceding with blanks: %10d \n", 1977);
	// ft_printf ("MINE:	Preceding with blanks: %10d \n", 1977);
	// printf ("ACTUAL:	Preceding with zeros: %010d \n", 1977);
	// ft_printf ("MINE:	Preceding with zeros: %010d \n", 1977);
	// printf ("ACTUAL:	Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// ft_printf ("MINE:	Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// printf ("ACTUAL:	Width trick: %*d \n", 5, 10);
	// ft_printf ("MINE:	Width trick: %*d \n", 5, 10);
	// printf ("ACTUAL:	%s \n", "A string");
	// ft_printf ("MINE:	%s \n", "A string");
	return (0);
}
