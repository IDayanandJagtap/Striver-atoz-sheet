// Recursion
// n to 1 (print n to 1 numbers)
// 1 to n

#include <stdio.h>

void nto1(int n)
{
    // base condition
    if (n == 0)
        return;

    printf("%d\t", n);

    nto1(n - 1);
}

void oneToN(int count, int n)
{
    if (count == n + 1)
        return;

    printf("%d\t", count);

    oneToN(count + 1, n);
}

int main()
{
    int n = 10;

    nto1(n);

    oneToN(1, 10);

    return 0;
}