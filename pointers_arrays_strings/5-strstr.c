#include "main.h"
/**
 * _strstr - finds stirng 2 in string 1
 * @needle: string being searched for
 * @haystack: string being searched
 * Return: pointer to begining of str 2 in str 1 or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int idx;
	int nedln;

	for (nedln = 0; needle[nedln] != '\0'; nedln++)
	{}
	for (; (*haystack != '\0'); haystack++)
	{
		for (idx = 0; (needle[idx] != '\0'); idx++)
		{
		if (*haystack != needle[idx])
			break;
		return (haystack);
		}
	}
	return ('\0');
}
