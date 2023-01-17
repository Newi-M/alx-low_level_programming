#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		p = malloc(sizeof(dog_t));

		if (p == NULL)
			return (NULL);

		p->name = malloc(sizeof(char) * name_l);

		if (p->name == NULL)
		{
			free(p);
			return (NULL);
		}

		p->owner = malloc(sizeof(char) * own_l);

		if (p->owner == NULL)
		{
			free(p->name);
			free(p);
			return (NULL);
		}

		p->name = _strcpy(p->name, name);
		p->owner = _strcpy(p->owner, owner);
		p->age = age;
	}

	return (p);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination
 * @src: Source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
