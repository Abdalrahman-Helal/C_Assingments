#include <stdio.h>
#include <stdlib.h>
#include "../STD_TYPES.h"
#include "LL.h"

node head;

int main (void)
{
    
    LL_voidAddNode(10);
    LL_voidAddNode(20);
    u32 op;
    u32 del;
    printf("To add Node enter 0 \n");
    printf("To print linked list enter 1 \n");
    printf("To exit press 2 \n");
    printf("To delete value  press 3 \n");
    printf("your choice :  \n");
    scanf("%d",&op);


    switch (op)
    {
    
    case 0:
        printf("Please enter node value : ");
        u32 x;
        scanf("%d",&x);
        LL_voidAddNode(x);
        printf("Node added thank you ");
        break;

    case 1:
        LL_voidPrintLinkedList();
        break;
    case 2:
        printf("thank you \n good bye\n");
        break;

    default:
        printf("Invalid choice please try again");
        break;
    }

    // LL_voidPrintLinkedList();

    LL_voidAddNode(10);
    LL_voidAddNode(20);
    LL_voidPrintLinkedList();
    // LL_voidAddNode(30);
    // LL_voidAddNode(40);
    // LL_voidAddNode(50);
    // LL_voidAddNode(60);
    // LL_voidAddNode(70);
    // LL_voidAddNode(80);
    // LL_voidAddNode(90);
    // LL_voidAddNode(100);
    // LL_voidAddNode(932);
    // LL_voidAddNode(321);
    // LL_voidAddNode(543);

}

