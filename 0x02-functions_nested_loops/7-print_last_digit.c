#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @number : number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int number)
{
	int last_digit = number < 0 ? -number % 10 : number % 10;

	_putchar(48 + last_digit);

	return (last_digit);
}
