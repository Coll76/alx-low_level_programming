#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_dog;
	int i, namelen = 0, ownerlen = 0;

	create_dog = (dog_t *)malloc(sizeof(dog_t));
	if (!create_dog)
	return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	create_dog->name = (char *)malloc(sizeof(namelen) + 1);
	if (!create_dog->name)
	return (NULL);

	create_dog->owner = (char *)malloc(sizeof(ownerlen) + 1);
	if (!create_dog->owner)
	return (NULL);
	create_dog->age = age;
	for (i = 0; i < namelen; i++)
	create_dog->name[i] = name[i];
	for (i = 0; i < ownerlen; i++)
	create_dog->owner[i] = owner[i];
	return (create_dog);
}
