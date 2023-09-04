#include "main.h"
/**
* argstostr -  function that concatenates all the arguments of your program.
* @argc: the number of argument
* @argv: the argument
* Return: the concatenated argument
*/
char *argstostr(int argc, char **argv)
{
	char *result;

	int i, j;

	int charr = 0;

	int index = 0;

	if (argc == 0)
		return (NULL);

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			charr++;
		}
		charr++;
	}

	result = malloc(sizeof(char) * (charr + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			result[index] = argv[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}
