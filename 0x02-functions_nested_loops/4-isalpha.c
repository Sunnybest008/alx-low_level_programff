#include "main.h"
/**
 *main - entry point
 *Description: function that checks for alphabetic character
 *Return: Returns 1 if c is a letter, lowercase or uppercase, returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 66 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
