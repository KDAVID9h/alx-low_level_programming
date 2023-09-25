#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
	{
		for (unsigned int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return s;
			}
		}
		s++;
	}

	return NULL; // No matching character found
}
