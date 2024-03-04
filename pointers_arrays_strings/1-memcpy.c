#include "main.h"
/**
 * _memcpy - copies the n amount of bytes from src to dest
 * @src: source string
 * @dest: destination string
 * @n: the limit of the function
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		dest[f] = src[f];
	}
	return (dest);
}
