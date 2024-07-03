#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int count = 50;  // Number of Fibonacci numbers to print
    int first = 1, second = 2;  // Initial Fibonacci sequence values
    int next;
    int i;

    // Print the first two Fibonacci numbers manually
    printf("%d, %d", first, second);

    // Generate and print the rest of the Fibonacci numbers
    for (i = 3; i <= count; i++)
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

