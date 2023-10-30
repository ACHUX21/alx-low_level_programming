#include "main.h"
/**
* error98 - error
* @filename: the error filename
*/
void error98(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
/**
* error99 - error message from error message
* @filename: the error message
*/
void error99(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
* close_err - close the error file
* @file_from: the error file
* @file_to: the error file
*/
void close_err(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
/**
* main - main function for the application
* @argc: number of arguments
* @argv: command line arguments
* Return: number of arguments
*/
int main(int argc, char **argv)
{
	ssize_t file_to, file_from;
	ssize_t read_from, write_from;
    int cto, cfrom;
	char buffer[1024];
    size_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error98(argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error99(argv[2]);

	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
		write(file_to, buffer, bytes_read);

	cfrom = close(file_from), cto = close(file_to);
	if (cto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cto);
		exit(100);
	}
	if (cfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cfrom);
		exit(100);
	}
	return (0);
}
