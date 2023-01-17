#ifndef _HEADER_
#define _HEADER_

#include <stdlib.h>

/**
 * struct dog - struct for different elements
 *
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
