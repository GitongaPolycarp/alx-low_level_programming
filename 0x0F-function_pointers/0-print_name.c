#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -function prints name
 * @f: variable
 * @name: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
