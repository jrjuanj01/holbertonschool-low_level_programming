#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonal matrices
 * @a: array coordinates
 * @size: size of the square
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int num;
	int idx;
	int sum1 = 0;
	int sum2 = 0;

	for (num = 0; num < (size); num++)
	{
		idx = num + (size * num);
		sum1 = sum1 + a[idx];
	}
	for (num = 0, idx = 0; num < (size) ; num++)
	{
		idx += (size - 1);
		sum2 = sum2 + a[idx];
	}
	printf("%d", sum1);
	printf("%s", ", ");
	printf("%d\n", sum2);
}
