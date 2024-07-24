#include <stdio.h>
#include "../STD_TYPES.h"
typedef struct employee{
    u16 age;
    u16 salary;
    u8 name[50];
}emp;

void FillData(emp*ptr);
void PrintData(emp *ptr);

int main(void)
{
     emp e[3];
    for(int i=0; i<2 ; i++)
    {
        FillData(&e[i]);
        
    }   

    for(int i=0; i<2 ; i++)
    {
       PrintData(&e[i]);
    }
}

void FillData(emp *ptr)
{
    printf("please enter your age : ");
    scanf("%d",&ptr->age);

    printf("please enter your salary : ");
    scanf("%d",&ptr->salary);

    printf("please enter your name : ");
    fflush(stdin);
    scanf("%[^\n]s",ptr->name);

}

void PrintData(emp *ptr)
{
    printf("the age is %d , salary is %d , name is %s \n",ptr->age,ptr->salary,ptr->name);
}


