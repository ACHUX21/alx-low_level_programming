#include "dog.h"
#include <stdio.h>
/**
* print_dog - print the dog object
* @d: the dog object
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.6f\n", (*d).age);
		printf("Owned: %s\n", (*d).owner);
	}
}
