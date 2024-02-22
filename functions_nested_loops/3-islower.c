#include "main.h"
/**
 * _islower - checks for lowercase letters
 * @c: charachter being verified
 * Return: int (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
