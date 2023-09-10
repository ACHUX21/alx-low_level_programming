#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Dog attributes
  * @name: The name of the dog
  * @age: The age of the dog
  * @owner: The owner of the dog
  *
  * Description: The attr of a dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_d - Typedef for dog
 */
typedef struct dog dog_d;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_d *new_dog(char *name, float age, char *owner);
void free_dog(dog_d *d);
#endif
