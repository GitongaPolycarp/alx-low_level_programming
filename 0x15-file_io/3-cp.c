#include "main.h"
#include <stdio.h>
/**
 * error_file - check if a file is opened and handle errors
 * @argv: argument vector
 * @file_from: initial file to copy from and to check
 * @file_to: file to copy to
 * Return: no return
 */
void error_file(int file_from, int file_to. char *argv[])
{
	if(file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
			exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file%s\n",argv);
		exit(99);
	}
}

/**
 * main - copy content of a file from one to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchar, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDER_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error_file(-1, file_to, argv);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		error_file(file_from, file_to, argv);
	}

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_from, buf, 1024);
		if (nchar == -1)
		{
			error_file(file_from, file_to argv);
			break;
		}

		nwr = write(file_to, buf, nchar);

			if (nwr == -1)
			{
				error_file(file_from, file_to, argv);
				break;
			}
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
