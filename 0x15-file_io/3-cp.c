#include "main.h"
/**
 * copyContentToCreatedFile - copy content from @file_from to @file_to
 * @file_from: name of the file that has the content (argv[1])
 * @file_to: name of the file that it will be made (argv[2])
 */
void copyContentToCreatedFile(const char *file_from, const char *file_to)
{
	int from, to, closefrom, closeto, bytes_read;
	char buffer[1024];

	from = open(file_from, O_RDONLY);

	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		close(from);
		exit(99);
	}

	while ((bytes_read = read(from, buffer, sizeof(buffer))) > 0)
	{
		write(to, buffer, bytes_read);
	}

	closefrom = close(from);
	closeto = close(to);
	if ((closefrom == -1) || (closeto == -1))
	{
		fprintf(stderr, "Error: Can't close fd %d",
				(closefrom == -1) ? (closefrom) : (closeto));
		exit(100);
	}
}
/**
 * main - copy content from file to another
 * @argc: length of argv
 * @argv: array of arguments
 * Return: return 0 if success
 */
int main(int argc, char *argv[])
{
	int file_from = 1;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((access(argv[file_from], F_OK | R_OK)) != 0)
	{
		fprintf(stderr, "Error: Can't read from file %s", argv[1]);
		exit(99);
	}

	copyContentToCreatedFile(argv[1], argv[2]);
	return (0);
}
