#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	size_t b_read, b_written;

	buffer = malloc(letters);
	if (buffer == NULL || letter == 0 || filename == NULL)
		return (0);

	f = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	b_read = read(f, buffer, letters);
	if (b_read == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	b_written = write(STDOUT_FILENO, buffer, b_read);
	if (b_written == -1 || b_written != b_read)
	{
		free(buffer);
		close(f);
		return (0);
	}
	free(buffer);
	close(f);
	return (b_written);
}
