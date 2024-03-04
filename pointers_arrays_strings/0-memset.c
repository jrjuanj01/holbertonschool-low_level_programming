#include "main.h"
/**
 * _memset - fills the n amount of bytes with b byte
 * @s: pointer to the function
 * @b: byte constant
 * @n: the limit of the function
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		s[f] = b;
	}
	return (s);
}

