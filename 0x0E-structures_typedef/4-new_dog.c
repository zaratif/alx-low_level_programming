#include <stdlib.h>
#include "dog.h"

/**
 * _strlength - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlength(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcopy - copies the string ponted to  by src
 * including the terminating null byte (\0)
 * to the bffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * create_dog - creates a new dog
 * @name: name of the dog
 * @age: name of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *create_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	len_name = _strlength(name);
	len_owner = _strlength(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcopy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcopy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
