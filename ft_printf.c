
#include <stdio.h>

#include <stdarg.h>

// We don't know how many arguments there are, and which type they are,
//		so we use the stdarg macros which include 3 macros for stepping through
//		a list of arguments whose number and types are not known to the called function.

// The address of 'format' is used in va_start()
//		so it should not be declared as a regular variable,
//		or a function, or an array type (i.e. declaring as a pointer).

// We know the first arguement 'format' is a character string,
//		which contains plain char, escape sequences, and format specifiers

// The format specifiers cause printing of the next successive argument.

// format is the last parameter before the variable argument list,
//		i.e. the last parameter of which the calling function knows the type.

void	ft_printf(const char *format, ...)
{
	va_list	ap1;
	char	*s;
	char	c;
	int		p;

	va_start(ap1, format); //initializes 'ap1' which can be passed to other functions.
	while (*format)
			switch(*format++)
			{
				case 's':
					s = va_arg(ap1, char *); //each call to va_arg() modifies ap1 so that the next call return the next argument.
					printf("My name is %s, ", s);
					break;
				case 'p':
					p = va_arg(ap1, int);
					printf("I am %d year's old, ", p);
					break;
				case 'c':
					c = (char) va_arg(ap1, int);
					printf("and my name starts with a capital %c.\n", c);
					break;
			}
	va_end(ap1); //signals no further arguements.
}




int		main()
{
	// I am passing into ft_printf() a string of format characters
	//		which correspond to the 'cases/names' I specified in ft_printf().

	// If the format characters are different then than what I specified
	//		in ft_printf() then it won't identify them and the behavior is undefined.

	ft_printf("%s %p %c", "Jarvis", 27, 'J');
	return(0);
}

