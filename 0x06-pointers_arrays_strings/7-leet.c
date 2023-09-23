#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the resulting string `str`
 */
char *leet(char *str)
{
    char *ptr = str;
    char leet_map[5][2] = {
        {'a', '4'},
        {'A', '4'},
        {'e', '3'},
        {'E', '3'},
        {'o', '0'},
        {'O', '0'},
        {'t', '7'},
        {'T', '7'},
        {'l', '1'},
        {'L', '1'}
    };

    while (*str != '\0')
    {
        int i = 0;
        while (i < 10)
        {
            if (*str == leet_map[i][0])
            {
                *str = leet_map[i][1];
                break;
            }
            i++;
        }
        str++;
    }

    return ptr;
}
