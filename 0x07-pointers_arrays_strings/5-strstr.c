#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: string to search through.
 * @needle: string to search for.
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j, k;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
            ;

        if (needle[k] == '\0')
            return (haystack + i);
    }

    return (NULL);
}
