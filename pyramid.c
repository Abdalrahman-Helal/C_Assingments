#include <stdio.h>
int main(void)
{
    int height,spaces;
    printf("please enter the height of pyramid : ");
    scanf("%d",&height);
    //loop for Height
    for (int i=1; i<=height; i++)
    {
        // loop for spaces
        spaces= height-i;
       for (int j = 0; j <spaces; j++)
       {
            printf(" ");
       }
       for (int j = 0; j<2*i-1; j++)
       {
            printf("*");
       }
       printf("\n");
       
    
    }
    

}