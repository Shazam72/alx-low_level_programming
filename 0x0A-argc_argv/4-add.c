#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *main - main function of program
 *@argc: number of command line argument
 *@argv: array that contains command line argument
 *Return: 0 if no problem appear
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		int i = 1;

		for (; i < argc; i++)
		{
			int arg_length = strlen(argv[i]);

			if (arg_length == 1)
			{
				if (isdigit(*argv[i]))
					sum += atoi(argv[i]);
				else
				{
					printf("Error\n");
					return (1);
				}
			} else
			{
				int j = 0;

				for (; argv[i][j] != '\0'; j++)
					if (!isdigit(argv[i][j]))
					{
						printf("Error\n");
						return (1);
					}
				sum += strtol(argv[i], NULL, 10);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
