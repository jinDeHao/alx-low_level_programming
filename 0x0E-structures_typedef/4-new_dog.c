#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buff_dog;

	buff_dog = malloc(sizeof(name) + sizeof(age) + sizeof(owner));
	if (buff_dog == NULL)
		return (NULL);
	buff_dog->name = name;
	buff_dog->age = age;
	buff_dog->owner = owner;
	return (buff_dog);
}
