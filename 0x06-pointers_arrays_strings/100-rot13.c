#include "main.h"
/**
 * rot13 - Encodes a string using the ROT13 substitution cipher.
 * @s: The input string to be encoded.
 *
 * This function takes a string as input
 * and applies the ROT13 substitution
 * cipher to each character in the string.
 * ROT13 replaces each letter with
 * the letter 13 places down the alphabet.
 * Non-letter characters remain
 * unchanged.
 *
 * The function iterates through the input
 * string and replaces each letter
 * with its corresponding ROT13 counterpart.
 * It leaves non-letter characters
 * untouched. The modified string is then returned.
 *
 * Return: A pointer to the modified input string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13chars = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr != '\0')
	{
		int i = 0;

		while (original[i] != '\0')
		{
			if (*ptr == original[i])
			{
				*ptr = rot13chars[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (s);
}
