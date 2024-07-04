#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int result;

    result = mul(3, 4);
    printf("3 * 4 = %d\n", result);

    result = mul(-2, 5);
    printf("-2 * 5 = %d\n", result);

    return (0);
}

