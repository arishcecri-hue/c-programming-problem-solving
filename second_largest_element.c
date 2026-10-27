
#include <stdio.h>

int find_second_largest(const int arr[], int size)
{
    int largest;
    int second_largest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest &&
                 arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main(void)
{
    int arr[] = {12, 35, 1, 10, 34, 35};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = find_second_largest(arr, size);

    printf("Second largest element: %d\n", result);

    return 0;
}
