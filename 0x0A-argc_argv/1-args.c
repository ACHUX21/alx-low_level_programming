#include <stdio.h>
/**
 * main - main function for the application and application
 * @argc - argument
 * @argv - argument list
 * return: int
 */

int main(int argc, char *argv)
{
	int len = 0;

	int i;

	for (i = 0; i < argc; i++)
		len++;

	printf("%d\n", len - 1);
	return (0);
}
