#include "hash_tables.h"
/**
 * shash_table_create - creates a shash table with a given size
 * @size: shash table size
 * Return: newly created shash table else NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = (shash_table_t *) malloc(sizeof(*table));
	if (table == NULL)
		return (NULL);
	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * add_n_shash - adds a node at the beginning of a shash at a given index
 * @h: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: newly created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}
	tmp = (shash_node_t *)malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;
	*h = tmp;
	return (tmp);
}

/**
 * add_i_shash - adds a node
 * @ht: pointer to the table
 * @new_shash: new node to add
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new_shash)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;
	while (tmp1 != NULL)
	{
		ret = strcmp(new_shash->key, tmp1->key);
		if (ret == 0)
			return;
		else if (ret < 0)
		{
			new_shash->sprev = tmp1->sprev;
			if (tmp1->sprev)
				tmp1->sprev->snext = new_shash;
			else
				ht->shead = new_shash;
			tmp1->sprev = new_shash;
			new_shash->snext = tmp1;
			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}
	new_shash->sprev = tmp2;
	new_shash->snext = NULL;
	if (ht->shead)
		tmp2->snext = new_shash;
	else
		ht->shead = new_shash;
	ht->stail = new_shash;
}

/**
 * shash_table_set - adds a hash to a given shash table
 * @ht: pointer to the shash table
 * @key: key
 * @value: value
 * Return: 1 if success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;
	shash_node_t *new;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	k_index = key_index((unsigned char *)key, ht->size);
	new = add_n_shash(&(ht->array[k_index]), key, value);
	if (new == NULL)
		return (0);
	add_i_shash(ht, new);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: ptr to the shash table
 * @key: key
 * Return: value of the shash
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int k_index;
	shash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || *key == '\0')
		return (NULL);
	k_index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[k_index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the keys and values of the shash table
 * @ht: pointer to the shash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;
	printf("{");
	sep = "";
	tmp = ht->shead;
	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table
 * in reverse
 * @ht: ptr to the shash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;
	printf("{");
	sep = "";
	tmp = ht->stail;
	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: pointer to the shash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp1;
	shash_node_t *tmp2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
