#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string being copied
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr = str;
	int idx;
	unsigned int strl;

	for (strl = 0; str[strl] != '\0'; strl++)
	{}
	if (str == NULL)
		return (NULL);
	ptr = malloc((strl + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (idx = 0; ptr[idx] == '\0'; idx++)
		ptr[idx] = str[idx];
	return (ptr);
}
