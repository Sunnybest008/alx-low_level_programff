#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char password[12];
	int i, sum = 0, diff;

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	password[i] = '\0';

	diff = 2772 - sum;

	password[i - 1] += diff;

	printf("%s\n", password);

	return (0);
}
