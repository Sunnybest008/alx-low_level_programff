#include <stdio.h>
/**
 *main - entry point
 *Description:'prints all possible combinations of two two-digit numbers'
 *Return: always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}