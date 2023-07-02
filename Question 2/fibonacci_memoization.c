#include <stdio.h>

#define MAX_SIZE 1000

int memo[MAX_SIZE];

// Recursive function with memoization to compute F(n)
int fibonacci_memoization(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibonacci_memoization(n - 3) + fibonacci_memoization(n - 2);

    return memo[n];
}

int main()
{
    int n = 1; // Example: Compute F(10)

    // Initialize memoization array
    for (int i = 0; i < MAX_SIZE; i++)
        memo[i] = -1;

    int result = fibonacci_memoization(n);
    printf("F(%d) = %d\n", n, result);

    return 0;
}