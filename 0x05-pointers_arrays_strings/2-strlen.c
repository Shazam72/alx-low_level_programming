/**
 *_strlen - function that returns the length of a string
 *
 *@s: reference to the string to count
 *Return: the length of the provided string
 */

int _strlen(char *s)
{
	int count = 0;
	char *pt_string = s;

	while (*pt_string != '\0')
	{
		count++;
		pt_string++;
	}

	return (count);
}
