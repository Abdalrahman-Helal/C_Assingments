#include <stdio.h>
int main(void)
{
    int ID, password,try=1;
    printf("Please Enter your ID :");
    scanf("%d",&ID);
    if(ID==1234 || ID == 5678 || ID == 9870)
    {
        printf("Please Enter Password");
        scanf("%d",&password);
    Check:
        if(password == 7788 || password ==5566 || password==1122)
        {
            if(ID==1234 && password==7788)
            {
                printf("Welcome Ahmed");
            }
            else if(ID==5678 && password==5566)
            {
                printf("Welcome Amr");

            }
            else if( ID==9870 && password==1122)
            {
                printf("Welcome Wael");
            }
            else
            {
                goto Try;
            }
        }
   
        else
        { Try:
            if(try <3) 
            {
                printf("Try Again : ");
                scanf("%d",&password);
                try++;
                goto Check;
                
            }
            else
            {
            printf("Incorrect password for 3 times . No more tries");
            }
        }
       
    }
    else
    {
        printf("you are not registered");
    }

}