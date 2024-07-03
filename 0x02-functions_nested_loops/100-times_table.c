#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number to start printing from
 *
 * Return: void
 */

void print_times_table(int n) {
    int i, j;
    
    /* Check if n is within the valid range */
    if (n < 0 || n > 15) {
        return;  /* Do nothing if n is out of range */
    }
    
    /* Iterate from 0 to n and print n times each number */
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            printf("%d", i * j);
            if (j != n) {
                printf(", ");
            }
        }
        printf("\n");
    }
}

