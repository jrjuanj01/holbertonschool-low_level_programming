#include "main.h"
/**
 * _strpbrk - Finds a given tring * @s: string being evaluated
 * @accept: Characters being searched for
 * @s: string being verified
 * Return: *s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int idx;

	for (; *s != '\0'; s++)
	{
		for (idx = 0; accept[idx] != '\0'; idx++)
		{
			if (*s == accept[idx])
				return (s);
		}
	}
	return ('\0');
}
