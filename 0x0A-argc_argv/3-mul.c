#include <stdio.h>
/**
* main - program that multiplies two numbers.
* @argv: argument list
* @argc: number of arguments
* Return: EXIT_SUCCESS or EXIT_FAILURE
*/
int main(int argc, char *argv[])
{
	int sum = 1;

	int i;

	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int h = atoi(argv[i]);

			sum *= h;
		}
		printf("%d\n", sum);
	}
	return (0);
}