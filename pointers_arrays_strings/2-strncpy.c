#include "main.h"
/**
 * _strncpy - Copies the string from the source into the destination
 * @src: Source Array
 * @dest: Destnation Array
 * @n: Amount of bytes it copies
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int apr;

	for (apr = 0; (src[apr] != '\0') && (apr < n); apr++)
		dest[apr] = src[apr];
	for (; apr < n; apr++)
		dest[apr] = '\0'
	return (dest);
}
