#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program demonstrates how to modify the value of the third element in
 * the integer array `a` without directly using the variable `a` and without
 * modifying the variable `p`. It utilizes pointer arithmetic to access the
 * memory location of the third element in the array and assigns the value 98 to it.
 * The program then prints the updated value using the printf function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p = a;

	/* Add one line of code here */
	*(p + 2) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
