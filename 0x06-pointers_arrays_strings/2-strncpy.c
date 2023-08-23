#include "main.h"
/**
 *_strncpy - a function that copies a string
 *@dest: destination string pointer.
 *@src: source string pointer.
 *@n: number or bytes to be used
 *Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count_of_bytes;

	count_of_bytes = 0;
	while (count_of_bytes < n && src[count_of_bytes] != '\0')
	{
		dest[count_of_bytes] = src[count_of_bytes];
		count_of_bytes++;
	}
	while (count_of_bytes < n)
	{
		dest[count_of_bytes] = '\0';
		count_of_bytes++;
	}
	return (dest);
}
