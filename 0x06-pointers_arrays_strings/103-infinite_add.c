#include <stdio.h>
#include "main.h"

/**
 * reverse - Reverses a string.
 * @str: The string to reverse.
 * @length: The length of the string.
 */
void reverse(char *str, int length)
{
	int start = 0;
	int end = length - 1;
	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result, or 0 if the result can't fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0;

	while (*n1 != '\0' || *n2 != '\0')
	{
		int sum = carry;
		if (*n1 != '\0')
		{
			sum += (*n1 - '0');
			n1++;
		}
		if (*n2 != '\0')
		{
			sum += (*n2 - '0');
			n2++;
		}

		r[i] = (sum % 10) + '0';
		carry = sum / 10;
		i++;

		if (i >= size_r)
			return 0;
	}

	if (carry != 0)
	{
		r[i] = carry + '0';
		i++;
	}

	if (i >= size_r)
		return 0;

	r[i] = '\0';
	reverse(r, i);
	return (r);
}
