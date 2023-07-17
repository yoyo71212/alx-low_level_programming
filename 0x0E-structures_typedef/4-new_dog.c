#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	res = malloc(sizeof(dog_t *));
	if (res == NULL)
	{
		return (NULL);
	}

	res->name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*res).name == NULL)
	{
		free(res);
		return (NULL);
	}

	res->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if((*res).owner == NULL)
	{
		free(res->name);
		free(res);
		return (NULL);
	}

	strcpy(res->name, name);
	res->age = age;
	strcpy(res->owner, owner);

	return (res);
}
