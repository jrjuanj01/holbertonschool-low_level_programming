#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;

	va_start(args, n);

	if (n != 0)
	{
		for (idx = 0; idx < n - 1; idx++)
		{
			printf("%d", va_arg(args, int));
			if (separator != NULL)
				printf("%s", separator);
		}
		if (idx == n - 1)
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
