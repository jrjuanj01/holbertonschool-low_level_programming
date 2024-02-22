#include "main.h"

/**
 * _isalpha - checks for lowercase letters
 * @c: charachter being verified
 * Return: int (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
