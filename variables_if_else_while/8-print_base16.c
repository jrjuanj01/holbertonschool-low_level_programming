#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

		for (hex = 0x30; hex <= 0x39; hex++)
		{
			putchar(hex);
		}
		for (hex = 0x61; hex <= 0x66; hex++)
		{
			putchar(hex);
		}
	putchar('\n');
	return (0);
}
