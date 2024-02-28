#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses the order of elements on the string
 * @s: String being reversed
 * Return: void
 */
void rev_string(char *s)
{
	int ln;
	int idx;
	int hold;

	for (ln = 0; s[ln] != '\0'; ln++)
	{}
	for (idx = 0; idx <= ((ln / 2) - 1); idx++, ln--)
	{
		hold = s[ln - 1];
		s[ln - 1] = s[idx];
		s[idx] = hold;
	}
}
