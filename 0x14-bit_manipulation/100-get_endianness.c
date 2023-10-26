#include "main.h"

/**
* get_endianness - IDK
* Return: IDK
*/
int get_endianness(void)
{
	unsigned int x = 1;

	int _return = (int) (((char *)&x)[0]);

	return (_return);
}
