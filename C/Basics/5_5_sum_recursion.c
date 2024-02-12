// Sum of n numbers using recursion

#include <stdio.h>

// formula ->  N * (n + 1)  /2

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{

    int n = 5;

    printf("Sum is : %d\n", sum(n));
    return 0;
}
