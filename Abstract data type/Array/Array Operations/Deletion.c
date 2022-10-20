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

void deleteOnIndex(int arr[], int size, int index){
    // coding for deletion 
  
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }

}

int main()
{

    int arr[100] = {2, 4, 8, 34, 87};
    int size = 5, index = 1;
    printf("Array elements before Deletion\n");
    display(arr, size);

    deleteOnIndex(arr, size, index);
    size -=1 ;

    printf("Array elements After Deletion\n");
    display(arr, size);

    


    return 0;
}