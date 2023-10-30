#include "main.h"
/**
* read_textfile - function that reads a text file and prints it to the POSIX
* @filename: the name of the file
* @letters: number of characters
* Return: 0 if success, -1 if error
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	int file;
	ssize_t c, w;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	p = malloc(sizeof(char) * letters);
	if (!p)
	{
		close(file);
		return (0);
	}

	c = read(file, p, letters);
	if (c == -1)
	{
		free(p);
		close(file);
		return (0);
	}

	w = write(STDOUT_FILENO, p, c);

	if (w == -1 || w != c)
	{
		free(p);
		close(file);
		return (0);
	}
	free(p);
	close(file);

	return (c);
}
