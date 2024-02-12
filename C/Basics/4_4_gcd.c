/*
    Find gcd of two numbers :

*/

#include <stdio.h>

int bruteForceApproach(int large, int small)
{
    int n = 1;
    int gcd = 1;

    while (n != small)
    {
        if (small % n == 0 && large % n == 0)
        {
            gcd = n;
        }
        n++;
    }

    return gcd;
}

int myOptimalApproach(int large, int small)
{
    int n = 1;
    int gcd = 1;

    if (large % small == 0)
    {
        return small;
    }
    while (n <= small / 2)
    {

        if (small % n == 0 && large % n == 0)
        {
            gcd = n;
        }
        n++;
    }

    return gcd;
}

int optimalApproach(int large, int small)
{
    // if a and b are both divided by a same greatest number(gcd) then a-b is also divided by that number;
    if (small == 0)
    {
        return large;
    }

    return optimalApproach(small, large % small);
}

int main()
{

    int small, large;

    printf("Enter large and small number : ");
    scanf("%d%d", &large, &small);

    // printf("Gcd of 2 nums is : %d\n", bruteForceApproach(large, small));
    // printf("Gcd of 2 nums is : %d\n", myOptimalApproach(large, small));
    printf("Gcd of 2 nums is : %d\n", optimalApproach(large, small));
}