/* patterns */
#include <stdio.h>

void pattern1(int n)
{
    /*
     *****
     *****
     *****
     *****
     *****
     */

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    /*
     *
     **
     ***
     ****
     *****
     */

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern3(int n)
{
    /*
     1
     12
     123
     1234
     12345
     */

    int i, j;

    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d", count++);
        }
        printf("\n");
    }
}

void pattern4(int n)
{
    /*
     1
     22
     333
     4444
     55555
     */

    int i, j;

    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", count);
        }
        count++;
        printf("\n");
    }
}

void pattern5(int n)
{
    /*
     *****
     ****
     ***
     **
     *
     */

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern6(int n)
{
    /*
     12345
     1234
     123
     12
     1
     */

    int i, j;

    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = 0; j < n - i; j++)
        {
            printf("%d", count++);
        }
        printf("\n");
    }
}

void pattern7(int n)
{
    /**
         *
        ***
       *****
      *******
     *********

    **/
    int i, j;

    for (i = 1; i <= n; i++)
    {
        // For preceding spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // For stars
        for (j = 1; j <= (i * 2) - 1; j++)
        {

            printf("*");
        }
        printf("\n");
    }
}

void pattern8(int n)
{
    /**
      *********
       *******
        *****
         ***
          *

    **/
    int i, j, k;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (i * 2) - 1; k++)
        {

            printf("*");
        }
        printf("\n");
    }
}

void pattern10(int n)
{
    /*
     *
     **
     ***
     ****
     *****
     ****
     ***
     **
     *
     */
    int i, j;
    int stars;

    for (i = 1; i <= n * 2; i++)
    {
        // No of stars to print in each row in first half
        stars = i;

        // After second half
        if (i > n)
            stars = 2 * n - i;

        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    pattern1(n);
    printf("\n\n");
    pattern2(n);
    printf("\n\n");
    pattern3(n);
    printf("\n\n");
    pattern4(n);
    printf("\n\n");
    pattern5(n);
    printf("\n\n");
    pattern6(n);
    printf("\n\n");
    pattern7(n);
    printf("\n\n");
    pattern8(n);
    printf("\n\n");
    // pattern 9
    pattern7(n);
    pattern8(n);
    printf("\n\n");

    pattern10(n);
    printf("\n\n");

    printPascalsTriangle(n);

    return 0;
}