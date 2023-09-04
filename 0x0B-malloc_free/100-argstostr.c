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

	int i, j, g, h, charr, index;

	if (argc == 0)
		return (NULL);

	for (h = 0; h < argc; h++)
	{
		for (g = 0; argv[h][g] != '\0'; g++)
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
		for (j = 0; argv[i][j] != '\0' ; j++)
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
