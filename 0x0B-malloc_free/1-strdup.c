#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to duplicate
 *
 * Return: string duplicated
 */
char *_strdup(char *str)
{
	int length, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[length])
	{
		length++;
	}

	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		s[i] = str[i];

	return (s);
}
