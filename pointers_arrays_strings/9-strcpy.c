#include "main.h"
/**
 * _strcpy - Copies the string of the source into the destination
 * @src: Source Array
 * @dest: Destnation Array
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int ln;
	int ttl;

	for (ln = 0; src[ln] != '\0'; ln++)
	{}
	for (ttl = 0; ttl <= ln; ttl++)
	{
		dest[ttl] = src[ttl];
	}
	return (dest);
}
