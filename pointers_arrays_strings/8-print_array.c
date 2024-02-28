#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints the designated array
 * @a: the array being printed
 * @n: number of elements the array contains
 * Return: void
 */
void print_array(int *a, int n)
{
	int ln;

	for (ln = 0; ln < n; ln++, *a++)
	{
		if (ln < n - 1)
			printf("%d%s", *a," ,");
		if (ln == n - 1)
			printf("%d",*a);
	}
	putchar('\n');
}
