#include "main.h"
/**
* _strstr - search for first occurrence substring in a string
* @haystack: string to searched in
* @needle: string to search
* Return: ptr to the beginning of the located
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (haystack);
}
