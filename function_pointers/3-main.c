#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - tests the operator functions
 * @argc: numbers to add
 * @argv: character comparison for the operation
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int ttl;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	ttl = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", ttl);
	return (0);
}
