#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	argc = 2;

	int	test;

	test = atoi(argv[1]);

	printf("%.*d\n", 20, test);
	return (0);

}