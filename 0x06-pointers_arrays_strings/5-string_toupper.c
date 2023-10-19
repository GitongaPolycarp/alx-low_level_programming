#include "main.h"

/**
 * string_toupper - Converts all lowercase characters in a string to uppercase letters
 * @str: The string to be converted
 * Return: The converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
			i++;
	}
	return str;
}
