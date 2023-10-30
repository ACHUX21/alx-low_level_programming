#include "main.h"
/**
* append_text_to_file - append text to file given file
* @filename: file to append text
* @text_content: text to append
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;

	ssize_t w;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (*(text_content + len))
		len++;

	w = write(file, text_content, len);

	if (w == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
