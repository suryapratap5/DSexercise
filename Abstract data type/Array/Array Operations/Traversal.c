// travesal ->  To visit every elements in the array 
#include<stdio.h>

void display(int arr[], int size){
    // coding for traversal array
    printf("Your array elements are \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

int main(){
    // int arr[] = {1,3, 7, 8, 9, 7};
    // printf("%lo\n", sizeof(arr)/sizeof(arr[5]));

    int arr[100] = {2, 4, 8,34, 87};
    int size = 5;
    display(arr, size);
    return 0;
}
