#include <stdio.h>
#include "main.h"
/**
 * Fizz_buzz - prints 1-100 replacing three and five
 *
 * Return: Always 0 (Success)
 */
void Fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("%s", "Fizz");
		if (num % 5 == 0)
			printf("%s", "Buzz");
		if (num % 3 != 0 && num % 5 != 0)
			printf("%d", num);
		putchar(' ');
	}
}
