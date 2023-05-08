#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept single digit number from user and print it into word.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)


{

    if ((iNo < 0))
    {
        iNo = -iNo;       //Updater
    }
    if ((iNo == 1))
    {
        printf("One\n");
    }
     if ((iNo == 2))
    {
        printf("Two\n");
    }
     if ((iNo == 3))
    {
        printf("Three\n");
    }
     if ((iNo == 4))
    {
        printf("Four\n");
    }
     if ((iNo == 5))
    {
        printf("Five\n");
    }
     if ((iNo == 6))
    {
        printf("Six\n");
    }
     if ((iNo == 7))
    {
        printf("Seven\n");
    }
     if ((iNo == 8))
    {
        printf("Eight\n");
    }
     if ((iNo == 9))
    {
        printf("Nine\n");
    }
     if ((iNo >=10))
    {
        printf("Invalid Input\n");
    }
}


int main()
{
        int iValue =0;
        printf("Enter number : \n");
        scanf("%d",&iValue);

        Display(iValue);

    return 0;
}