#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cou_nt = 0;
	int fou_nd;

	while (*s != '\0')
	{
		fou_nd = 0;
		for (unsigned int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				cou_nt++;
				fou_nd = 1;
				break;
			}
		}

		if (!fou_nd)
		{
			return cou_nt;
		}

		s++;
	}

	return cou_nt;
}
