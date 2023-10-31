#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of a program
 * @ac: count
 * @av: vector
 * Return: pointer to array of char
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		if (a[k] == '\0')
		{
			a[k++] = '\n';
		}
	}
	return (a);
}
