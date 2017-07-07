#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	argc = 4;

	int num1;
	int num2;
	int num3;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	num3 = atoi(argv[3]);	
	printf("the size of int is %lu, the size of 1-digit num is %lu, the size of 2-digit num is %lu, the size of 3-digit num is %lu\n", sizeof(int), sizeof(num1), sizeof(num2), sizeof(num3));
	return (0);

}
