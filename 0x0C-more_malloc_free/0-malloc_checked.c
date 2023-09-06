#include "main.h"
/**
* malloc_checked - allocate memory for the specified
* @b: a pointer to the allocated
* Return: a pointer to the
*/
void *malloc_checked(unsigned int b)
{
	if (b == 0)
		exit(98);

	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);


	return (p);
}
