#include <stdio.h>
int main(void)
{
    int ID;
    int num1,num2;
    printf("Please Enter Operation ID");
    scanf("%d",&ID);
   switch(ID)
   {
    case 1:
    printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1+num2);
    break;

    case 2:
    printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1-num2);
    break;

    case 3:
    printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1*num2);
    break;

    case 4:
    printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1/num2);
    break;

    case 5:
    printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1&num2);
    break;

    case 6:
    printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1|num2);
    break;

    case 7:
    printf("Please Enter 1 Operand");
    scanf("%d",&num1);
    printf("%d",~num1);
    break;

    case 8:
    printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1^num2);
    break;
    case 9:
     printf("Please Enter 2 Operand");
    scanf("%d %d",&num1,&num2);
    printf("%d",num1%num2);
    break;

    case 10:
    printf("Please Enter 1 Operand");
    scanf("%d",&num1);
    printf("%d",++num1);
    break;

    case 11:
    printf("Please Enter 1 Operand");
    scanf("%d",&num1);
    printf("%d",--num1);
    break;
   }
}