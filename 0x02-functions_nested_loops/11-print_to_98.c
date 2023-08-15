#include "main.h"
/**
* print_to_98 - function that from n to 89
* @n: The From number
* Return : Void
*/

void print_to_98(int n)
{
int i;

for (i = 98; n <= i ; n++)
{
if (n < 0 && n > -10)
{
_putchar('-');
_putchar(-n + 48);
}
else if (n < -9)
{
_putchar('-');
_putchar(-n / 10 + 48);
_putchar(-n % 10 + 48);
}
else if (n > 0 && n < 10)
{
_putchar(n + 48);
}
else
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}


