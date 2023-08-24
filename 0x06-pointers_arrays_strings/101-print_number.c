#include "main.h"
/**
 * print_number - Prints an integer to the standard output.
 * @n: The integer to be printed.
 *
 * This function takes an integer as input
 * and prints it to the standard
 * output. It handles both positive and negative integers.
 *
 * The function first checks if the integer is negative.
 * If it is, it prints
 * a minus sign and converts the integer to its
 * positive counterpart for printing.
 *
 * Then, the function recursively divides
 * the integer by 10 and prints each
 * digit in reverse order. This process
 * effectively prints the integer as a
 * sequence of characters.
 *
 * Return: None (void).
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
