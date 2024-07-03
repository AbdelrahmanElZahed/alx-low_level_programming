#include <stdio.h>

int main(void)
{
    int first = 1, second = 2;
    int next;
    long long sum = 2; // Start with 2 because second is even and already added

    // Generate Fibonacci sequence and sum even-valued terms
    while (second <= 4000000)
    {
        next = first + second;
        if (next % 2 == 0)
        {
            sum += next;
        }
        first = second;
        second = next;
    }

    printf("%lld\n", sum);

    return 0;
}

