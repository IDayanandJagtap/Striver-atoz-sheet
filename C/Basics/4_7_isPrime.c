// check if the number is prime or not

#include <stdio.h>
#include <math.h>

int isPrime(int N)
{
    int i, flag = 1;

    if (N == 1 || N == 0)
        return 0;
    if (N == 2)
        return 1;

    for (i = 2; i <= (int)sqrt(N); i++)
    {
        if (N % i == 0)
            flag = 0;
    }

    return flag;
}

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);

    if (isPrime(N))
        printf("%d is prime number!\n", N);
    else
        printf("%d is not a prime number!\n", N);

    return 0;
}