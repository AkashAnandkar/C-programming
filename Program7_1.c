#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Write a program which accept number from user and display 
//                        its digit in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    if((iNo<0))
    {
        iNo=-iNo;       //Updater
    }

    int iDigit=0;
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}



int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);

    return 0;
}