#include <stdio.h>

int main() {
    int first = 1, second = 2, next;
    int count = 2; /* Start with the first two numbers (1 and 2) */
    
    /* Print the first two Fibonacci numbers */
    printf("%d, %d, ", first, second);
    
    /* Generate and print the remaining Fibonacci numbers */
    while (count < 98) {
        next = first + second;
        printf("%d, ", next);
        
        /* Move to the next pair of Fibonacci numbers */
        first = second;
        second = next;
        count++;
    }
    
    /* Print the 98th Fibonacci number without a trailing comma */
    next = first + second;
    printf("%d\n", next);
    
    return 0;
}

