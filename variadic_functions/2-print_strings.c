#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int idx;
	char *str;

	va_start(strs, n);

	if (n != 0)
	{
		for (idx = 0; idx < n - 1; idx++)
		{
			str = va_arg(strs, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator != NULL)
				printf("%s", separator);
		}
		if (idx == n - 1)
		{
			str = va_arg(strs, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}
	va_end(strs);
	printf("\n");
}
