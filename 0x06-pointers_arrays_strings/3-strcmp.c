#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Negative, zero, or positive value if s1 is less than, equal to, or greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2) {
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
