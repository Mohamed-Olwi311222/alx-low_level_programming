#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: -1 if failed and 1 if succeed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *empty = "";

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = empty;
	if (access(filename, F_OK) == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	if (fd == -1)
		return (-1);
	if ((write(fd, text_content, sizeof(text_content))) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}
