#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the array
 *
 * Return: NULL if an error occured,
 * pointer to the newly created has table otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *res;

	res = malloc(sizeof(hash_table_t));
	if (!res)
	{
		return (NULL);
	}

	res->size = size;
	res->array = malloc(size * sizeof(hash_node_t *));
	if (!(res->array))
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		res->array[i] = NULL;
	}

	return (res);
}
