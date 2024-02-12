// Factorial of a number;

#include <stdio.h>

int factRecursive(int n)
{

    if (n == 1 || n == 0)
        return 1;

    return n * factRecursive(n - 1);
}

int main()
{
    int n = 5;

    printf("Factorial of %d: %d\n", n, factRecursive(n));
    return 0;
}