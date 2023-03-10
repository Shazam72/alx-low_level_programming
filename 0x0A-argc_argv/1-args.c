#include <stdio.h>

/**
 *main - main function of program
 *@argc: number of command line argument
 *@argv: array that contains command line argument
 *Return: 0 if no problem appear
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
