#include "holberton.h"
/**
 * create_file - creates a file
 * @text_content: null terminated string to write to the file
 * @filename: name of the file to created
 * Return: 1 in success, -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		/* to write the text we need to fin the size first*/
		for (size = 0; text_content[size] != '\0'; size++)
			;
		/*ssize_t wirte (int fd, const void *buf, size_t count; */
		write(fd, text_content, size);
	}
	close(fd);
	return (1);
}
