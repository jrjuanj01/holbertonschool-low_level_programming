#include "main.h"
/**
 * _isupper - checks for upperrcase letters
 * @c: charachter being verified
 * Return: int (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
