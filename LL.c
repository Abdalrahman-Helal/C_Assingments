#include <stdio.h>
#include <stdlib.h>
#include "../STD_TYPES.h"
#include "LL.h"
extern node head;
u32 global_u32ListLenght=0;

void LL_voidAddNode(u32 A_u32Data)
{
    if(global_u32ListLenght ==0)
    {
        head.data = A_u32Data;
        head.next = NULL;
    }
    else
    {
        node *last;
        node *new = (node *) malloc(sizeof(node));

        new -> data = A_u32Data;
        new -> next= NULL;
        last=&head;

        while (last->next != NULL)
        {
            last = last -> next;
        }

        last -> next =new;
    }
    global_u32ListLenght++;
}

void LL_voidPrintLinkedList (void)
{
    if(global_u32ListLenght !=0)
    {
        u32 i=1;
        node *last;
        last=&head;
        printf("Node No. %d is %d \n",i++,last->data);
        while(last -> next != NULL)
        {
            last = last ->next;
            printf("Node No. %d is %d \n",i++,last ->data);
        }
    }

    else
    {
        printf("the list is empty \n");
    }
}





