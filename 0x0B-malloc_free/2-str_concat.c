#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - function
 * @s1: first operand string
 * @s2: second operand string
 * Return: a pointer to the newly allocated string and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	strcat(str, s1);
	strcat(str, s2);

	return (str);
}
