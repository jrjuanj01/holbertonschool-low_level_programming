#include "main.h"
/**
 * _strcat - Appends the the new string into another
 * @src: the source string
 * @dest: the destination string
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int ttl;
	int idx;

	for (ttl = 0; dest[ttl] != '\0'; ttl++)
	{}

	for (idx = 0; src[idx] != '\0'; idx++, ttl++)
	{
		dest[ttl] = src[idx];
	}
	return (dest);
}
