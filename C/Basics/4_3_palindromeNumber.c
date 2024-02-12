// Check if the number is palindrome
// approach -> find reverse and then compare both

#include <stdio.h>

int main()
{
    int N = 123321;
    int num = N;
    int reverseNum = 0;
    int rem, isPalindrome = 1;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        reverseNum = reverseNum * (10) + rem;
    }

       if (N == reverseNum)
    {
        printf("Entered num is palindrome : %d\n", N);
    }
    else
    {
        printf("Entered num is not palindrome : %d\n", N);
    }
}