#include <stdio.h>
int func(int *ptr);
int swap(int *ptr, int *ptr1);

int main(void)
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("please enter No.%d ", i+1);
        scanf("%d",&arr[i]);
    }
    func(arr);
}

int swap(int *ptr, int *ptr1) 
{
    int temp = *ptr1;
    *ptr1=*ptr;
    *ptr=temp;
}

int func(int *ptr)
{
    for (int i = 0; i <4 ; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                // int temp= ptr[j+1];
                // ptr[j+1]= ptr[j];
                // ptr[j]=temp;
                swap(&ptr[j],&ptr[j+1]);
                
            }
        }
    }

    printf("the array after sorting \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t",ptr[i]);
    }
    
    
}

