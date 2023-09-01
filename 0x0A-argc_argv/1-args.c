#include <stdio.h>
/**
 * main - main function for the application and application
 * @argc: argument
 * @argv: argument list
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int len = 0;

	int i;

	for (i = 0; i < argc; i++)
		len++;

	printf("%d\n", len - 1);
	return (0);
}
