#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t b_read, b_written;

	buffer = malloc(letters);
	if (buffer == NULL || letters == 0 || filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	b_read = read(fd, buffer, letters);
	if ((int)b_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	b_written = write(STDOUT_FILENO, buffer, b_read);
	if ((int)b_written == -1 || b_written != b_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (b_written);
}
