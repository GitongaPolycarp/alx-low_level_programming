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
	size_t i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	s = (char *)malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
