#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

		for (hex = 0x61; hex <= 0x7a ; hex++)
		{
			putchar(hex);
		}
	putchar('\n');
	return (0);
}
