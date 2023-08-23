#include "main.h"
/**
 *cap_string- function that capitalizes all words of a string
 *@s: pointer to string.
 *Return: pointer to s.
 */
char *cap_string(char *s)
{
	int string_count = 0;

	/* Capitalize the first character if it's a lowercase letter */
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - ('a' - 'A');
	}

	while (s[string_count] != '\0')
	{
		if (s[string_count] == ' ' || s[string_count] == '\t' || s[string_count] == '\n'
				|| s[string_count] == ',' || s[string_count] == ';' || s[string_count] == '.'
				|| s[string_count] == '!' || s[string_count] == '?' || s[string_count] == '"'
				|| s[string_count] == '(' || s[string_count] == ')' || s[string_count] == '{'
				|| s[string_count] == '}')
		{
			if (s[string_count + 1] >= 'a' && s[string_count + 1] <= 'z')
			{
				s[string_count + 1] = s[string_count + 1] - ('a' - 'A');
			}
		}
		string_count++;
	}

	return (s);
}
