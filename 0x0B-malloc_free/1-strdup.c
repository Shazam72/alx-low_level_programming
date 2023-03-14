#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function
 * @str: size of the array
 * Return: a pointer to the newly allocated string
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);

	return (new_str);
}
