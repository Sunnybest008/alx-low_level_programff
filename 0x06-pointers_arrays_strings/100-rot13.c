#include "main.h"

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

	return s;
}
