#include "main.h"
/**
 * _strncat - Appends the the new string into another until n is reached
 * @src: the source string
 * @dest: the destination string
 * @n - maximum amount of bytes to be reached
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int ttl;
	int idx;
	int apr;

	for (ttl = 0; dest[ttl] != '\0'; ttl++)
	{}

	for (apr = 0, idx = 0; (src[idx] != '\0') && (apr < n) ; idx++, ttl++, apr++)
	{
		dest[ttl] = src[idx];
	}
	return (dest);
}
