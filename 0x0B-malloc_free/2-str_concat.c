#include "main.h"
#include <stdlib.h>
#include <stdio.h> /* For NULL definition */

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Handle cases where s1 or s2 is NULL */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the length of s1 and s2 */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Allocate memory for concatenated string (+1 for null terminator) */
    concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return (NULL);

    /* Copy s1 to concat */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy s2 to concat */
    for (j = 0; j < len2; j++)
        concat[i + j] = s2[j];

    /* Add null terminator */
    concat[len1 + len2] = '\0';

    return (concat);
}

