#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - prints everyother character
 *@dest: pointer to pass
 *@src: pointer to pass
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
    int i;
    int size = 0;

    while (src[size] != '\0')
    {
        size++;
    }

    for (i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
    dest[size] ='\0';
    return (dest);
}
