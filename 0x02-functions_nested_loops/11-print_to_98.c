#include "main.h"
#include "stdio.h"
/**
*print_to_98 - Prints all natural numbers from n to 98.
*@n: Starting number
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d", n);
		for (n = n + 1; n <= 98; n++)
		{
			printf(", %d", n);
		}
		printf("\n");
	}
	else
	{
		printf("%d ", n);
		for (n = n - 1; n >= 98; n--)
		{
			printf(", %d",n);
		}
		printf("\n");
	}
}
