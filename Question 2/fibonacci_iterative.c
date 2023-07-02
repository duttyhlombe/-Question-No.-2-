#include <stdio.h>

// Iterative function to compute F(n)


int F_iterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int a = 0, b = 1, c = 2, i;
    for (i = 3; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = c;
        c = temp;
    }
    return c;
}

int main() {
    int n = 2; // Example usage
    int result = F_iterative(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}