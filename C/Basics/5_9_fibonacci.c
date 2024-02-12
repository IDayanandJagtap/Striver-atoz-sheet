/*
    Fibonacci series
    0 1 1 2 3 5 8 ....
*/

#include <stdio.h>

int fibonacci(int n)
{
    int n1 = 0;
    int n2 = 1;
    int n3, i;

    printf("%d\t%d\t", n1, n2);

    for (i = 0; i < n - 1; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        printf("%d\t", n3);
    }
}

void recursiveFibonacci(int index, int lastElem, int currElem, int n)
{
    // base condition
    if (index >= n)
        return;

    if (index == 0)
        printf("%d\t", 0);

    printf("%d\t", lastElem);

    recursiveFibonacci(++index, currElem, currElem + lastElem, n);
}

int main()
{

    int n = 5;

    fibonacci(n);
    printf("\n");
    recursiveFibonacci(0, 1, 1, n);
    return 0;
}