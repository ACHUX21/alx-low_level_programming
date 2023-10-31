#include "main.h"
/**
 * main - copies the content of a file to another file.
 *
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd11, readd, writte, file_closed, file2_closed;
	char *buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY, 0);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd11 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd11 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((readd = read(fd1, buf, 1024)) > 0)
	{
		writte = write(fd11, buf, readd);
		if (writte != readd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (readd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_closed = close(fd1);
	if (file_closed != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	file2_closed = close(fd11);
	if (file2_closed != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd11), exit(100);
	return (0);
}
