#include "main.h"
/**
 * _strstr - finds stirng 2 in string 1
 * @needle: string being searched for
 * @haystack: string being searched
 * Return: pointer to begining of str 2 in str 1 or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; (*haystack != '\0'); haystack++)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return (haystack);
	}
	return ('\0');
}
