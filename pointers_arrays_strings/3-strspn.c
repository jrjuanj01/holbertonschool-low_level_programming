#include "main.h"
/**
 * _strspn - calculates the length of s where there are no accept characters
 * @s: string being evaluated
 * @accept: characters being searched for
 * Return: int # of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte;
	int idx;

	for (byte = 0; *s != '\0'; s++, byte++)
	{
		for (idx = 0; accept[idx] != '\0'; idx++)
		{
			if (*s == accept[idx])
				break;
			if (accept[idx + 1] == '\0')
				return (byte);
			if (idx < 0)
				return (byte);
		}
	}
	return (byte);
}
