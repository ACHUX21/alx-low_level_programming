#include "main.h"
/**
* create_file - create a file
* @filename: the name of the file
* @text_content: the content of the file
* Return: status code
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t size;
	int len = 0;

	while (text_content[len] != '\0')
		len++;

	if (!text_content)
		text_content = "";

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
if (text_content)
{
	size = write(file, text_content, len);

	if (size == -1)
	{
		close(file);
		return (-1);
	}
}
	close(file);

	return (1);
}
