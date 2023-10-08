#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of long: %zu\n", sizeof(long));
	printf("Size of float: %zu\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
	printf("Size of char: %zu\n", sizeof(char));
	printf("Size of short: %zu\n", sizeof(short));
	printf("Size of long long: %zu\n", sizeof(long long));
	return (0);
}
