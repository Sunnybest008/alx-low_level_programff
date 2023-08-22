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
	char password[100];
	int i, sum = 0, n;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78 + 48;
		sum += password[i];
		putchar(password[i]);
		if (sum >= 2772)
		{
			n = 2772 - sum + password[i];
			putchar(n);
			break;
		}
	}

	return (0);
}
