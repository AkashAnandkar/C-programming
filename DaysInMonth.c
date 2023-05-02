#include<stdio.h>

    void DaysInMonth(unsigned int iNumber)
    {
        if(iNumber==1)
        {
            printf("This Month have 31 Days.");
        }
        else if(iNumber==2)
        {
            printf("This month have 28 or 29 Days.");
        }
        else if(iNumber==3)
        {
            printf("This Month have 31 Days.");
        }
        else if(iNumber==4)
        {
            printf("This Month have 30 Days");
        }
        else if(iNumber==5)
        {
            printf("This Month have 31 Days");
        }
        else if(iNumber==6)
        {
            printf("This Month have 30 Days");
        }
        else if(iNumber==7)
        {
            printf("This Month have 31 Days");
        }
        else if(iNumber==8)
        {
            printf("This Month have 31 Days");
        }
        else if(iNumber==9)
        {
            printf("This Month have 30Days");
        }
        else if(iNumber==10)
        {
            printf("This Month have 31 Days");
        }
        else if(iNumber==11)
        {
            printf("This Month have 30 Days");
        }
        else if(iNumber==12)
        {
            printf("This Month have 31 Days");
        }
        else
        {
            printf("Invalid Input Month");
        }
    }

int main()
{
   

    unsigned int iMonth=0;
    printf("Enter the month number that you want to find how many day's it hava: ");
    scanf("%d",&iMonth);

    DaysInMonth(iMonth);
    return 0;

}