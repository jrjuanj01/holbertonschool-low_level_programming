#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, ltw = 0, lib = 0;
	char *reader;

	if (filename == NULL)
		return(-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if(file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (lib = 0, reader = text_content; ; reader++, lib++);
		ltw = write(file, text_content, lib);
	}

	if (close(file) == -1 || ltw != lib)
		return (-1);
	
	return (1);
}
