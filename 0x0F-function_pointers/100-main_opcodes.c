#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: integer
*/
int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[2 - 1]) - 1;

	if (b <= -1)
	{
		printf("Error\n");
		exit(2);
	}

	while (--b)
	{
		printf("%02hhx%s", *p++, b ? " " : "\n");
	}

	return (0);
}
