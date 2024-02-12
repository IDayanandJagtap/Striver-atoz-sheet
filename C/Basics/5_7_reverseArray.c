// Reverse an array in same arr :
/*
    input : arr[n] = { 1,2,3,4,5}

    output : arr[n] = {5,4,3,2,1}


    7/2 = > 3
    {1,2,3,4,5,6,7}
*/

#include <stdio.h>

int reverseArray(int *arr, int size)
{
    int i, temp;

    int j = size - 1;

    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    return 0;
}

void recursiveReverse(int *arr, int start, int end)
{
    if (start >= end)
        return;

    int temp;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    return recursiveReverse(arr, start + 1, end - 1);
}

void printArray(int arr[], int size)
{
    int i;
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // reverse array :
    reverseArray(arr, size);
    printArray(arr, size);

    // reverse again :
    recursiveReverse(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}