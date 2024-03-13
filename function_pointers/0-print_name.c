#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints your name
 * @name: name
 * @(*f)(char *): pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
