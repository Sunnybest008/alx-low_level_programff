/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing characters to be accepted.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 1;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (found == 0)
		{
			break;
		}

		count++;
		s++;
		accept = accept - count + 1;
	}

	return (count);
}
