#include "main.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers,
 *followed by a new line.
 *
 *@a: array to print
 *@n: array length to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
		printf("%d%s", a[i], (i == n - 1) ? "\n" : ", ");
}
