#include "main.h"
/**
 * _strlen_recursion - finds the length of s
 * @s: string being measured
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s =='\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
