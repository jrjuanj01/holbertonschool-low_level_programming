#include "main.h"
/**
 * _strcmp - Compares to given strings
 * @s1: first string
 * @s2: second string
 * Return: integer representing the differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int idx = 0;
	int dif;

	for (idx = 0, dif = s1[idx] - s2[idx]; dif == 0; idx++)
	{
		dif = s1[idx] - s2[idx];
		if (s1[idx] == '\0')
			break;
	}
	return (dif);
}
