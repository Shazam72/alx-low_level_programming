#include <stdio.h>

/**
 *main - main function of program
 *@argc: number of command line argument
 *@argv: array that contains command line argument
 *Return: 0 if no problem appear
 */
int main(int argc, char *argv[])
{
	while (argc-- != 0)
		printf("%s\n", *argv++);
	return (0);
}
