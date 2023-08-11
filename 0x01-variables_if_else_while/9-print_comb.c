#include <stdio.h>

/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

		for (i = 48 ; i <= 48 + 9 ; i++)
		{
			putchar(i);
			if (i != 48 + 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	putchar('\n');
	return (0);
}
