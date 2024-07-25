#ifndef _L_L_H_
#define _L_L_H_

typedef struct NODE_t node;
struct NODE_t
{
    u32 data;
    node * next;
};

void LL_voidAddNode(u32 A_u32Data);
void LL_voidPrintLinkedList (void);

#endif