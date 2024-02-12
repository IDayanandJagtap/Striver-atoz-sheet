/*
    identify if the number is armstrong number
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int armstrongNumber(int N)
{
    int num = N, sum = 0, rem, digits = 0;

    // find size of digits
    char numInStr[10];
    sprintf(numInStr, "%d", N);
    digits = strlen(numInStr);

    // Add sum of powerss
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += round(pow(rem, digits)); // pow  returns power in floting point numbers so we need to round it
        // eg ... it returns 124 for 5^3 after rounding it becomes 125
    }

    printf("Sum : %d\n", sum);
    return sum == N;
}

int main()
{

    int N = 153;
    printf("Enter a number : ");
    scanf("%d", &N);

    if (armstrongNumber(N))
        printf("Entered number : %d is an armstrong number !\n ", N);
    else
        printf("Entered number : %d is not an armstrong number !\n ", N);
}