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

		for (i = 0 ; i < 10 ; i++)
		{
			for (j = 0; j < 10 ; j++)
			{
				if (i != '9' && j != '9')
				{
					if (k % 2 != 0)
						putchar(',');
					putchar(' ');
				}
				putchar(i + 48);
				putchar(j + 48);
			k++;
			}
		}
}
