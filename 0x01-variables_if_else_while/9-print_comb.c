#include <stdio.h>
/**
 * main - entry point
 * Description: 'comb of numbers'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
