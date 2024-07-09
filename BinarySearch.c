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
    int f=0;
    int l =9;
    int mid=0;
    int index=-1;
    int x;
    
    printf("\nplease enter No. to Search: ");
    scanf("%d",&x);
    while(f<=l)
    {
      
        mid=(f+l)/2;
        if(x == arr[mid])
        {
            index= mid;
            break;
        }
        else if (x > arr[mid])
        {
            f= mid + 1;
        }
        else if(x < arr[mid])
        {
            l= mid -1;
        }
    }

    if(index != -1)
    {  
        printf("No.%d was found in index %d",x,index);
    }
    else
    {
        printf("No.%d wasn't found in any index",x);
    }
}
