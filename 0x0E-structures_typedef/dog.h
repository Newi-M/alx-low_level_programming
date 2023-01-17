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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
