#include "main.h"
/**
* isupper - A function That check if the input is upper
* @c: Integer
* Return: return 1 if int c is upper else 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
