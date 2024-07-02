#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* Copy characters from src to dest until '\0' is encountered */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Append '\0' to the end of dest to terminate the string */
    dest[i] = '\0';

    return dest;
}

