#include <stdio.h>
#include <stdlib.h>
#include "../STD_TYPES.h"

int main (void)
{
    int Loc;
    printf("Please Enter N0. of Locations to reserve : ");
    scanf("%d",&Loc);

    // u32 *ptr = (u32*) malloc(Loc*sizeof(u32));
    u32 *ptr = (u32*) calloc(Loc,sizeof(u32));
    if(ptr == NULL)
    {
        printf("sorry, Memory couldn't be allocated \n");
    }
    else
    {
            for (u32 i = 0; i < Loc; i++)
            {
                printf("Please Enter Value No. %d ",i+1);
                scanf("%d",&ptr[i]);
            }
            for (u32 i = 0; i < Loc; i++)
            {   
                printf("The Value Number %d is %d \n",i+1,ptr[i]);
            }
    }
  

    
}
