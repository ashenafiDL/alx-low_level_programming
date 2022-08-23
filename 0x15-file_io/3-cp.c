#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_error(int from, int to, char **argv);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: always 1
 */
int main(int argc, char **argv)
{
	int from, to, nchars, nwr, close_error;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	check_error(from, to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from, buffer, 1024);
		if (nchars == -1)
			check_error(-1, 0, argv);

		nwr = write(to, buffer, nchars);
		if (nwr == -1)
			check_error(0, -1, argv);
	}

	close_error = close(from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from);
		exit(100);
	}

	close_error = close(to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", to);
		exit(100);
	}

	return (1);
}

/**
 * check_error - checks for file descriptor error
 * @from: file descriptor of the source file
 * @to: file descriptor of destination file
 * @argv: list of arguments passed to the program
 */
void check_error(int from, int to, char **argv)
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
