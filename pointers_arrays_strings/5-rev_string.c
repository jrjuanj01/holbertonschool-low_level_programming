#include "main.h"
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
	int ttl;

	for (ln = 0; s[ln] != '\0'; ln++)
	{}
	ttl = ln;
	for (idx = 0; idx < ((ttl / 2)); idx++, ln--)
	{
		hold = s[ln - 1];
		s[ln - 1] = s[idx];
		s[idx] = hold;
	}
}
