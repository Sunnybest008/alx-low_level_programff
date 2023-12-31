#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the
 * command line arguments
 *
 * Return: 0 if successful, 1 if there
 * are non-digit symbols in the input
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
