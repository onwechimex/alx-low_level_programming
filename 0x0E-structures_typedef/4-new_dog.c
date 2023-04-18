#include <stdlib.h>
#include "dog.h"
/**
* new_dog - a function that creates a new dog
* @name: a string 'name'
* @age: a float 'age'
* @owner: a string 'owner'
* Return: returns a pointer to a struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, j = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->age = age;

	for (n = 0, j = 0; name[n] != '\0'; n++)
		j++;
	newDog->name = malloc(sizeof(char) * (j + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (n = 0; 1 ; n++)
	{
		(*(newDog->name + n)) = name[n];
		if (name[n] == '\0')
			break;
	}
	for (n = 0, j = 0; owner[n] != '\0'; n++)
		j++;
	newDog->owner = malloc(sizeof(char) * (j + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	for (n = 0; 1 ; n++)
	{
		(*(newDog->owner + n)) = owner[n];
		if (owner[n] == '\0')
			break;
	}
	return (newDog);
}
