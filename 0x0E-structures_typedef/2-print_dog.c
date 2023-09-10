#include "dog.h"
#include <stdio.h>
/**
* print_dog - print the dog object
* @d: the dog object
*/
void print_dog(struct dog *d)
{
	if ((*d).name == NULL && (*d).owner == NULL)
	{
		printf("Name: %s\n", "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", "(nil)");
	}
	if ((*d).name != NULL && (*d).owner == NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", "(nil)");
	}
	if ((*d).name == NULL && (*d).owner != NULL)
	{
		printf("Name: %s\n", "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
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
