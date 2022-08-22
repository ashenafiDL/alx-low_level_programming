#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name the text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_count = read(fd, buffer, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || read_count != write_count)
		return (0);

	free(buffer);
	close(fd);

	return (write_count);
}
