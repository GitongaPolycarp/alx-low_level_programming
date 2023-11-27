#include "main.h"
/**
 * create_file - creates file
 * @filename: filename to be created
 * @text_content: content to be copied
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	struct stat st;
	size_t bytes = 0;

	if (!filename)
	{
		return (-1);
	}

	if (stat(filename, &st) == 0)
	{
		fd = open(filename, O_RDWR | O_TRUNC);
	}
	else
	{
		fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (*text_content)
		{
			if (write(fd, text_content, 1) != 1)
			{
				close(fd);
				return (-1);
			}
			text_content++;
			bytes++;
		}
	}

	close(fd);
	return (bytes);
}
