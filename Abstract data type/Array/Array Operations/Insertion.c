#include <stdio.h>

void display(int arr[], int size)
{
    // coding for traversal array

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertOnIndex(int arr[], int size, int index, int element, int capacity){
    // coding for insertion 
    if(size >= capacity){
        return -1;
    }

    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;

}

int main()
{

    int arr[100] = {2, 4, 8, 34, 87};
    int size = 5, index = 2, element = 88;
    printf("Array elements before insertion\n");
    display(arr, size);

    insertOnIndex(arr, size, index, element, 100);
    size += 1;
    printf("Array elements After insertion\n");
    display(arr, size);


    return 0;
}