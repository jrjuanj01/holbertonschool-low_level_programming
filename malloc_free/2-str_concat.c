#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concaenates s2 to s1
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int idx1;
	int idx2;
	unsigned int s1l;
	unsigned int s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1l = 0; s1[s1l] != '\0'; s1l++)
	{}
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
	{}
	ptr = malloc((s1l + s2l + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (idx1 = 0; s1[idx1] != '\0'; idx1++)
		ptr[idx1] = s1[idx1];

	for (idx2 = 0; s2[idx2] != '\0'; idx1++, idx2++)
		ptr[idx1] = s2[idx2];

	return (ptr);
}
