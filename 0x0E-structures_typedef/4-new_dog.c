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
 * _strcopy - copies the string ponted to  by src including
 * the terminating null byte (\0)to the buffer pointed to by dest
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
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: name of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	len_name = _strlength(name);
	len_owner = _strlength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcopy(dog->name, name);

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcopy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
