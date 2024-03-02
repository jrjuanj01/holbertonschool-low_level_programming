#include "main.h"
/**
 * leet - replaces letters
 * @str: string being edited
 * Return: string
 */
char *leet(char *str)
{
	char ABC[] = "AaEeOoTtLl";
	char leet[] = "4433007711";

	int idx;
	int apr;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (apr = 0; ABC[apr] != '\0'; apr++)
		{
			if (str[idx] == ABC[apr])
			{
				str[idx] = leet[apr];
				break;
			}
		}
	}
	return (str);
}
