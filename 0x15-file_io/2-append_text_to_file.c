#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string to append
 * Return: -1 if failed and 1 if succeed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	char *empty = "";

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = empty;
	len = strlen(text_content);

	if ((access(filename, F_OK | W_OK)) == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
	}
	else
		return (-1);

	if ((write(fd, text_content, len)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
