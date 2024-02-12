// Find palindrome of string;

#include <stdio.h>
#include <string.h>

int palindrome(char *str)
{
    // Calculate by string function or by user defined function (string is terminated by '\0' character)
    int size = strlen(str);

    char reversedStr[size];
    int i, j = 0;

    // Reverse string
    for (i = size - 1; i >= 0; i--)
    {
        reversedStr[j++] = str[i];
    }
    reversedStr[j] = '\0';

    // check using strcmp
    if (strcmp(str, reversedStr) == 0)
        return 1;
    else
        return 0;

    // or use loop to iterate over both string(same length) and compare every char;
}

//! more optimal way

int optimalPalindrome(char *str)
{
    int length = strlen(str);
    int j = length - 1;

    for (int i = 0; i < length / 2; i++)
    {

        if (str[i] != str[j])
            return 0;

        j--;
    }

    return 1;
}

int main()
{
    char *str;

    printf("Enter a string : ");
    gets(str);

    if (optimalPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}