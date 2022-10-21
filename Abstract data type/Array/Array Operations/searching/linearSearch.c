#include <stdio.h>

int linearSearch(int arr[], int size, int elemenet)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elemenet)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 5, 7, 38, 83, 34, 28, 9788, 92, 53};
    int size = sizeof(arr) / sizeof(int);
    int element = 5;
    
    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);

    return 0;
}