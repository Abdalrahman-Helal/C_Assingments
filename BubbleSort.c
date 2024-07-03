#include <stdio.h>
int main(void)
{
    int arr[10];
    for(int i=0; i<10; i++)
    {
        printf("please enter value NO. %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9-i; j++)
        {
           if(arr[j]> arr[j+1])
           {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
           }

        }

    }
    printf("sorted array\n:");   
    for(int i=0; i<10; i++)
    {
        printf("%d \t",arr[i]);
       
    }
    
}