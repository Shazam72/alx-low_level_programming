#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function of program
 *@argc: number of command line argument
 *@argv: array that contains command line argument
 *Return: 0 if no problem appear
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
