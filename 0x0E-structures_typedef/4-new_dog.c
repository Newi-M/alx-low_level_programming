#include "dog.h"

/**
 * _strlen - returns length of string
 * @str: string to be counted
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;

	return (len);
}

/**
 * _strcopy - copy string pointed by src to dest
 * @dest: destination
 * @src: source
 *
 * Return: returns copied string
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] ; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->name = _strcopy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcopy(ptr->owner, owner);

	return (ptr);
}




