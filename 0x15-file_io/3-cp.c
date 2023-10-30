#include "main.h"
/**
* main - main function for the application
* @ac: number of arguments
* @av: command line arguments
* Return: number of arguments
*/
int main(int ac, char **av)
{
	ssize_t file_to, file_from;
	int cto, cfrom;

	char buffer[1024];

	size_t bytes_read;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
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
