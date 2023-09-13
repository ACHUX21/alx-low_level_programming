#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: INT
*/
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", func(a, b));

	return (0);
}
