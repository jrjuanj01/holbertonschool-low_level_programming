#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments together
 * @n: constant number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int idx;
	int sum = 0;

	va_start(arg, n);

	if (n == 0)
		return (0);

	for (idx = 0; idx < n; idx++)
		sum = sum + va_arg(arg, int);
	return (sum);
}
