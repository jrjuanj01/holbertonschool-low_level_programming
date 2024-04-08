#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t ltw, lib;
	char *text;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	for (lib = 0, text = text_content; *text; text++, ltw++)
		;
	ltw = write(file, text_content, lib);

	if (close(file) == -1 || lib != ltw)
		return (-1);
	return (ltw);
}
