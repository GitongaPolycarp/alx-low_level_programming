#include "main.h"
/**
 * read_textfile - function reads text file and prints it
 * @filename: filename
 * @letters: letters to be printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff;
	ssize_t nrd, nwr;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(fp, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fp);
	free(buff);

	return (nwr);
}
