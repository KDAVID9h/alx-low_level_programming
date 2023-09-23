#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @n: The string to convert
 * Return: A pointer to the resulting string `n`
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
