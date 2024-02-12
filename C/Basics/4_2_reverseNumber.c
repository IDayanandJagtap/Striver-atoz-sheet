/*
Problem Statement: Given a number N reverse the number and print it.

Examples:

Example 1:
Input: N = 123
Output: 321
Explanation: The reverse of 123 is 321

Example 2:
Input: N = 234
Output: 432
Explanation: The reverse of 234 is 432


    multiplier = 1;
    newNum = 0;
    while(n> 10){
        a = num % 10;
        num = num - (a * multiplier)

        printf("New num : %d\n", newNum);
        newNum += (a*multiplier)
    }
        printf("New num : %d\n", newNum);

*/

#include <stdio.h>

void main()
{
    int num = 768910;
    int reverseNum = 0;
    int rem;

    while (num > 0)
    {
        // Extract the last digit
        rem = num % 10;
        // printf("A : %d\n", rem);

        // reduce the last digit (remove)   (it happens because we are using (Int) datatype)
        num = num / 10;

        // Now add the remainder to the new digit;
        reverseNum = reverseNum * (10) + rem;
    }

    printf("Reversed num is : %d\n", reverseNum);
}