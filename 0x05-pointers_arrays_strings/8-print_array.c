#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array of integers
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
    int i;

    /* Print each element of the array followed by a comma */
    for (i = 0; i < n - 1; i++)
    {
        printf("%d, ", a[i]);
    }

    /* Print the last element without a trailing comma */
    if (i < n)
    {
        printf("%d", a[i]);
    }

    printf("\n");
}

