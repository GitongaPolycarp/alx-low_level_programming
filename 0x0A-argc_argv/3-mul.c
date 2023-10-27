#include <stdlib.h>
#include <stdio.h>

/**
 * main - converts string to integer
 * @argc: count
 * @argv: array
 * Return: int converted from string
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
