// find all the divisors of a number

#include <stdio.h>
#include <math.h>

void printDivisors(int N)
{
    int i;

    printf("Divisors : ");
    /*
        Traverse till the sqaure root
        eg 36
        sq-> 6  ... stop at 6
        1 2 3 4 6 ... but if we mod these numbers ... 36/1 -> 36, 36/2-> 18, 36/3-> 12, 36/4-> 9, 36/6-> 6
        So we got all the divisors;
    */
    for (i = 1; i <= (int)sqrt(N); i++)
    {
        if (N % i == 0)
        {
            printf("%d\t", i);
            if (N / i != i)
            {
                printf("%d\t", N / i);
            }
        }
    }

    printf("\n");
}

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);

    printDivisors(N);
}