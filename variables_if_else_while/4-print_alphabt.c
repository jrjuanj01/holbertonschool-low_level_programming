#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a == 'e' || a == 'q')
		{
			a++;
		}
		else
		{
			putchar (a);
		}
	putchar('\n');
	return (0);
}
