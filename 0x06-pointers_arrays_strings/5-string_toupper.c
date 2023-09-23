#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @str: The string to convert
 *
 * Return: A pointer to the resulting string `str`
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }

    return ptr;
}
