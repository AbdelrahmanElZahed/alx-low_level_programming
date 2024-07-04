#include <stdio.h>

/**
 * main - find and print first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int i, j = 1, k = 2;
    unsigned long int j1, j2, k1, k2;

    printf("%lu", j); // Print the first Fibonacci number

    for (i = 1; i <= 91; i++) // Loop for the first 91 Fibonacci numbers
    {
        printf(", %lu", k);

        /* Move to the next pair of Fibonacci numbers */
        k = k + j;
        j = k - j;
    }

    /* Print the remaining 7 Fibonacci numbers without trailing comma */
    for (i = 92; i <= 98; i++)
    {
        printf(", ");

        k1 = k / 1000000000;
        k2 = k % 1000000000;
        j1 = j / 1000000000;
        j2 = j % 1000000000;

        if (k1 != 0)
            printf("%lu%09lu", k1, k2);
        else
            printf("%lu", k2);

        /* Calculate the next Fibonacci numbers */
        k += j;
        j = k - j;
    }

    printf("\n");

    return (0);
}

