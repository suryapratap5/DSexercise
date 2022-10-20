#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int totol_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{

    // (*a).totol_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int*) malloc(tSize * sizeof(int));

    a->totol_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d\n", i+1);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void show(struct myArray *a)
{
    printf("Arry ADT value are \n");
 
    for (int i=0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 100, 2);
    printf("setVal method running now\n");
    setVal(&marks);
    printf("show method running now\n");
    show(&marks);

    return 0;
}