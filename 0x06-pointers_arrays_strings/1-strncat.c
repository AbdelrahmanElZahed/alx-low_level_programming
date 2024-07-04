#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: input value
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int i = 0;
        int j;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (j < n && src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }

        dest[i] = '\0';
        return(dest);
}
