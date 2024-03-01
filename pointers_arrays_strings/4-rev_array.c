#include "main.h"
/**
 * reverse_array - Reverses the given array
 * @a: Array being reversed
 * @n: number of elements to swap
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int idx;
	int hold;
	int ttl = n - 1;

		for (idx = 0; idx < ((n) / 2); idx++, ttl--)
	{
		hold = a[ttl];
		a[ttl] = a[idx];
		a[idx] = hold;
	}
}
