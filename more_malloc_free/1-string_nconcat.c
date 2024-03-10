#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concaenates n bytes of s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be allocated of s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int idx1 = 0;
	unsigned int idx2 = 0;
	unsigned int s1l = 0;
	unsigned int s2l;
	unsigned int ttl;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1l = 0; s1[s1l] != '\0'; s1l++)
	{}
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
	{}

	if (s2l > n)
		ttl = s1l + n;
	if (s2l < n)
		ttl = s1l + s2l;

	ptr = malloc((ttl + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (idx1 = 0; s1[idx1] != '\0'; idx1++)
		ptr[idx1] = s1[idx1];

	for (idx2 = 0; idx2 < n && s2[idx2] != '\0'; idx1++, idx2++)
		ptr[idx1] = s2[idx2];
	if (idx2 == (ttl - s1l))
		ptr[idx1] = '\0';

	return (ptr);
}
