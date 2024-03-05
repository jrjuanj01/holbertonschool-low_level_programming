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

	for (; (*haystack != '\0'); haystack++)
	{
		for (idx = 0; (needle[idx] != '\0'); idx++)
		{
			if (*haystack != needle[idx])
				break;
			if (*haystack == needle[idx])
				haystack++;
			if (needle[idx + 1] != '\0')
				return (haystack - 1);
		}
	}
	return ('\0');
}
