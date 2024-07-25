#include <stdio.h>
#include <stdlib.h>
#include "../STD_TYPES.h"
#include"../Functions.h"
#include"../Functions.c"

int main(void)
{
    u32 n, *ptr;
    printf("Please Enter No. of Elmenets : ");
    scanf("%d",&n);
    ptr= (u32*) malloc(n*sizeof(u32));

    if(ptr == NULL)
    {
        printf("There isn't Sufficient Space in Memory");
    }
    else
    {
        read(ptr,n);
        write(ptr,n);
        BubbleSort(ptr,n);
        BinarySearch(ptr,n);
    }
}
