#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints th ename of the file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int idx;
	int itr;
	int ttl;

	if (argc > 1)
	{
		for (idx = 1; argv[idx] != NULL; idx++)
		{
			for (itr = 0; argv[idx][itr] != '\0'; itr++)
			{
				if (isdigit(argv[idx][itr]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			ttl += atoi(argv[idx]);
		}
		printf("%d\n", ttl);
		return (0);
	}
	printf("0\n");
	return (0);
}
