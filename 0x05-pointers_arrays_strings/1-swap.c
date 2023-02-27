/**
 *swap_int - function that swaps the values of two integers
 *
 *@a:reference of the first operand to swap
 *@b:reference of the second operand to swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
