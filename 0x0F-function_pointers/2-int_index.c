/**
 * int_index - function that searches for integer
 * @array: array to use
 * @size: size of array
 * @cmp: pointer to the search to be used to compare values
 * Return: index of searched value otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		int result = 0;

		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
