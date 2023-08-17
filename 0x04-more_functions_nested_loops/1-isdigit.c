#include "main.h"
/**
* _isdigit - A function That check if the input is digit
* @c: Integer
* Return: return 1 if int c is digit else 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
