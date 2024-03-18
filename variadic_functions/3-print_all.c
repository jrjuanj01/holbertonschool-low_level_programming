#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * cprnt - prints characters
 * @args: arg to be printed
 */
void cprnt(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 * iprnt - prints ints
 * @args: arg to be printed
 */
void iprnt(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 * fprnt - prints float
 * @args: arg to be printed
 */
void fprnt(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * sprnt - prints strings
 * @args: arg to be printed
 */
void sprnt(va_list *args)
{
	char *ptr = va_arg(*args, char *);

	if (ptr == NULL)
		printf("(nil)");
	printf("%s", ptr);
}

/**
 * print_all - a function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	fprint forms[] = {
		{"c", cprnt},
		{"i", iprnt},
		{"f", fprnt},
		{"s", sprnt},
		{NULL, NULL}
	};

	int ftidx = 0;
	int fsidx = 0;
	char *sep = "";
	va_list args;

	va_start(args, format);

	while (format != NULL && format[ftidx] != '\0')
	{
		while (forms[fsidx].frmt != NULL)
		{
			if (format[ftidx] == *forms[fsidx].frmt)
			{
				printf("%s", sep);
				forms[fsidx].prnt(args);
				sep = ", ";
			}
			fsidx++;
		}
		fsidx = 0;
		ftidx++;
	}
	va_end(args);
	printf("\n");
}
