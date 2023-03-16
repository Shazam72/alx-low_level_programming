#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first operand
 * @s2: second operand
 * @n: number of bytes to copy from the second operand
 * Return: pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *pt;
	unsigned int length_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length_s2 = strlen(s2);
	if (n >= length_s2)
		n = length_s2;
	pt = malloc(sizeof(char) * (strlen(s1) + n) + 1);
	strcat(pt, s1);
	strncat(pt, s2, n);
	if (pt == NULL)
		return (NULL);
	return (pt);
}
