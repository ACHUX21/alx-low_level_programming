#include "main.h"
/**
* main - Copy the file contents to the file
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char **argv)
{
	ssize_t file_to, file_from;
	ssize_t read_from, write_from;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (read_from > 0)
	{
		read_from = read(file_from, buffer, 1024);
		if (read_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			close(file_from), close(file_to), exit(98);
		}
		write_from = write(file_to, buffer, read_from);
		if (write_from != -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from), close(file_to), exit(99);
		}
		if (close(file_from) != -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from), exit(100);
		}
		if (close(file_to) != -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to), exit(100);
		}
	}
}
