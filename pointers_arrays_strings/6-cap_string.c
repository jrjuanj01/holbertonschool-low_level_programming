#include "main.h"
/**
 * cap_string - Checks the beginning letter of each word
 * @str: String being evaluated
 * Return: String
 */
char *cap_string(char *str)
{
	char *ptr = str;

	if (*ptr >= 'a' && *ptr <= 'z')
		*ptr -= 32;
	while (*ptr != '\0')
	{
		if (*ptr  == ' ' || *ptr  == '	' || *ptr  == '\n' || *ptr  == ',' ||
				*ptr  == ';' || *ptr  == '.' || *ptr  == '!' || *ptr  == '?' ||
				*ptr  == '"' || *ptr  ==  '(' || *ptr  ==  ')' || *ptr  ==  '{' ||
				*ptr  ==  '}')
		{
			ptr++;
			if (*ptr >= 'a' && *ptr <= 'z')
				*ptr -= 32;
		}
		else
			ptr++;
	}
	return (str);
}
