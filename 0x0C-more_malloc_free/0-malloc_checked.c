#include "main.h"
/**
* malloc_checked - allocate memory for the specified
* @b: a pointer to the allocated
* Return: a pointer to the
*/
void *malloc_checked(unsigned int b)
{
	void *p;



	p = malloc(b);

	if (p == NULL)
		exit(98);


	return (p);
}
