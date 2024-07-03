#include "main.h"
#include <stdio.h>

void print_times_table(int n) {
    // Check if n is within the valid range
    if (n < 0 || n > 15) {
        return;  // Do nothing if n is out of range
    }
    
    // Iterate from 0 to 10 and print n times each number
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n = 5;  // Example: printing the 5 times table
    print_times_table(n);
    return 0;
}

