#include <stdio.h>
/**
 * main - prints th ename of the file
 * @argc: argument counter
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
		printf("%s\n", argv[idx]);
	return (0);
}
