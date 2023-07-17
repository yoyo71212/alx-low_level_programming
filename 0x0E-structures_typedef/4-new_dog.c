#include "dog.h"
#include <stdlib.h>
/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	res = malloc(sizeof(dog_t));
	if (res == NULL)
	{
		return (NULL);
	}

	res->name = name;
	res->age = age;
	res->owner = owner;

	return (res);
}
