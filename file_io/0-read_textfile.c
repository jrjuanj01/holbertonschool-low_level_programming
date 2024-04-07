#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: amount of letters read
 * Return: number of letters it could read and print or 0 at failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, read_check, write_check;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc((letters) * sizeof(char));
	if (buffer == NULL)
		return (0);

	open_file = open(filename, 2);
	if (open_file == -1)
	{
		free(buffer);
		return (0);
	}

	read_check = read(open_file, buffer, letters);
	if (read_check == -1)
	{
		close(open_file);
		free(buffer);
		return (0);
	}

	write_check = write(STDOUT_FILENO, buffer, read_check);
	free(buffer);
	close(open_file);

	if (write_check != read_check)
		return(0);

	return (write_check);
}
