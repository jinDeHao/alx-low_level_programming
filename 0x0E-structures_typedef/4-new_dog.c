#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - copy the string to the buffer.
 * @src: The pointer
 * @dest: The pointer
 * Return: On success dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
		l++;
	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: buff_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buff_dog;
	int l_name = 0, l_owner = 0;

	while (name[l_name] != '\0')
		l_name++;
	while (owner[l_owner] != '\0')
		l_owner++;
	buff_dog = malloc(sizeof(dog_t));
	if (buff_dog == NULL)
		return (NULL);
	buff_dog->name = malloc(l_name + 1);
	if (buff_dog->name == NULL)
	{
		free(buff_dog);
		return (NULL);
	}
	buff_dog->owner = malloc(l_owner + 1);
	if (buff_dog->owner == NULL)
	{
		free(buff_dog);
		free(buff_dog->name);
		return (NULL);
	}
	_strcpy(buff_dog->name, name);
	_strcpy(buff_dog->owner, owner);
	buff_dog->age = age;
	return (buff_dog);
}
