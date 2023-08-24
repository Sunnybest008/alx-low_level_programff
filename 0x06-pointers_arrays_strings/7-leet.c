#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * This function takes a string as input
 * and replaces specific characters
 * with their 1337 encoding counterparts,
 * based on the following rules:
 * - 'a' and 'A' are replaced by '4'
 * - 'e' and 'E' are replaced by '3'
 * - 'o' and 'O' are replaced by '0'
 * - 't' and 'T' are replaced by '7'
 * - 'l' and 'L' are replaced by '1'
 *
 * The function iterates through the input
 * string and replaces characters
 * that match the specified characters with their corresponding 1337
 * encoding. It returns the modified string.
 *
 * Return: A pointer to the modified input string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replacements[] = "443370111";

	while (*ptr != '\0')
	{
		int i = 0;

		while (leet_map[i] != '\0')
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}
