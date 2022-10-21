// for binary searching array must be sorted
#include<stdio.h>


int binarySearch(int arr[], int size, int element)
{

    int low, mid, high;
    low = 0;
    high = size -1 ;

    // start searching
    while (low <= high)
    {
        mid = (low + high) / 2;
        
        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // end searching
    return -1;
}

int main()
{
    // sorted array for binary search
    int arr[] = {1, 5, 7, 8, 9, 19, 34, 48, 59, 134, 568, 983};
    int size = sizeof(arr) / sizeof(int);
    int element = 8;
    int searhIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d\n", element, searhIndex);
    return 0;
}