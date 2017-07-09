/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:39:51 by jnederlo          #+#    #+#             */
/*   Updated: 2017/07/08 18:43:52 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int len;

	len = ft_printf("%5ld\n", (long)27);
	printf("%5ld\n", (long)27);
	// printf("%d\n", len);
	// printf ("Characters: %c %c \n", 'a', 65);
	// ft_printf ("Characters: %c %c \n", 'a', 65);
	// printf ("Decimals: %d %ld\n", 1977, 650000L);
	// ft_printf ("Decimals: %d %ld\n", 1977, 650000L);
	// printf ("Preceding with blanks: %10d \n", 1977);
	// ft_printf ("Preceding with blanks: %10d \n", 1977);
	// printf ("Preceding with zeros: %010d \n", 1977);
	// ft_printf ("Preceding with zeros: %010d \n", 1977);
	// printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// ft_printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// printf ("Width trick: %*d \n", 5, 10);
	// ft_printf ("Width trick: %*d \n", 5, 10);
	// printf ("%s \n", "A string");
	// ft_printf ("%s \n", "A string");
	return (0);
}
