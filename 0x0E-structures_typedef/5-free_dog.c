#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - free the structure dog
 * @d: pointer to free
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
