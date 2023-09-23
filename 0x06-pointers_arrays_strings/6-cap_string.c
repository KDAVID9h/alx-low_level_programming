#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to capitalize
 *
 * Return: A pointer to the resulting string `str`
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize_next = 1;

    while (*str != '\0')
    {
        if (strchr(" \t\n,;.!?\"(){}", *str) != NULL)
        {
            capitalize_next = 1;
        }
        else if (capitalize_next && *str >= 'a' && *str <= 'z')
        {
            *str -= 32;
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 0;
        }
        str++;
    }

    return ptr;
}
