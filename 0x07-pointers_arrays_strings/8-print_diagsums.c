#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the
 * two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i = 0;

	while (i < size)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + (size - 1 - i));
		i++;
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
