#include "main.h"
/**
* argstostr -  function that concatenates all the arguments of your program.
* @argc: the number of argument
* @argv: the argument
* Return: the concatenated argument
*/
char *argstostr(int argc, char **argv)
{

	int c, h, i, g;
	char *str;
	int index = 0;

	if (argc == 0)
		return (NULL);
	for (h = 0; h < argc; h++)
	{
		for (g = 0; argv[h][g] != '\0'; g++)
		{
			c++;
		}
		c++;
	}

	str = malloc(sizeof(char) * (c + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < argc; i++)
	{
		for (g = 0; argv[i][g] != '\0'; g++)
		{
			str[index] = argv[i][g];
			index++;
		}
		str[index] = '\n';
		index++;
	}

	str[index] = '\0';
	return (str);
}
    