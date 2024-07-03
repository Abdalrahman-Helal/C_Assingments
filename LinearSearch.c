#include <stdio.h>
int main(void)
{
     int arr[10];
     int index=-1;
    for(int i=0; i<10; i++)
    {
        printf("please enter value NO. %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("please enter number to search");
    scanf("%d",&x);
    for(int i=0; i<10; i++)
    {
        if(x== arr[i])
        {
            index=i;
            break;
        }
    }
    if(index != -1)
    { 
        printf("No.%d was found in index %d",x,index);
    }
    else
    {
        printf("No.%d wasn't found in any index %d",x);
        
    }
}
