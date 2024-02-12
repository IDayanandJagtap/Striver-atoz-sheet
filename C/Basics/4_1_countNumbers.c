#include <stdio.h>
#include <string.h>

int countNubmers(int num)
{

    int count = 1;

    while (num > 10)
    {
        num = num / 10;
        count++;
    }

    return count;
}

int countNumbersString(int num)
{
    int count;
    char str[10];
    sprintf(str, "%d", num);

    return strlen(str);
}

void main()
{

    int n = 23565;

    // Time complexity : O(n)
    printf("count is :%d\n", countNubmers(n));
    // Time complexity : O(1)
    printf("count is :%d\n", countNumbersString(n));
}

// Better way could be to convert the number to string and then calculate the length.