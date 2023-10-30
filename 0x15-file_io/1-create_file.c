#include "main.h"

/**
 * create_file - Creates or truncates a file and writes text to it.
 * @filename: The name of the file to create or truncate.
 * @text_content: The text to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fp = -1;
	ssize_t written = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		written = write(fp, text_content, _strlen(text_content));
		if (written < 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);

	return (1);
}

/**
 * _strlen - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}