#include "main.h"
/**
 * _stpbrk - Finds a given tring * @s: string being evaluated
 * @accept: Characters being searched for
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
