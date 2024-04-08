#include "main.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 97-100 on errors
 */
int main(int argc, char *argv[])
{
	int og_file, new_file, lib, ltw;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	og_file = open(argv[1], O_RDONLY);
	new_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	lib = read(og_file, buffer, sizeof(buffer));
	ltw = write(new_file, buffer, lib);

	if (lib  == -1 || og_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	if (new_file == -1 || lib != ltw)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	if (close(og_file) == -1 || close(new_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd \n");
		return (100);
	}
	return (0);
}
