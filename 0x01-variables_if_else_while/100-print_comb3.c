#include <stdio.h>

/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/

int main(void)
{
		int i, j;
		int k = 0;

				for (i = 48 ; i <= 48 + 8 ; i++)
				{
						for (j = 49 + k ; j <= 48 + 9 ; j++)
						{

							putchar(i);
							putchar(j);
								if (i != 56 || j != 57)
								{
									putchar(44);
									putchar(32);
								}

						}
					k++;

				}
				putchar('\n');
		return (0);
}
