#include "main.h"
/**
 * _atoi - Converts a given array into an integer
 * @s: Is the given string given to be converted
 * Return: int of s value
 */
int _atoi(char *s)
{
	int ttl;
	int num;
	int neg = 1;

	{
		for (ttl = 0; ((s[ttl] < '0') || (s[ttl] > '9')) && s[ttl] != '\0'; ttl++)
		{
			if (s[ttl] == '-')
				neg = -1 * neg;
		}
		for (num = 0; (s[ttl] >= '0') && (s[ttl] <= '9'); ttl++)
		{
			num = num * 10 + neg * (s[ttl] - '0');
		}
	}
	return (num);
}
