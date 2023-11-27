#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: filename to append content to
 * @text_content: content to be appended
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)

		rwr = write(fp, text_content, n);

		if (rwr == -1)
			return (-1);
	}
	close(fp);

	return (1);
}
