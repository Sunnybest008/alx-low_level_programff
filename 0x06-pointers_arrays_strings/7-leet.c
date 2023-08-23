#include "main.h"

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

	return str;
}
