#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Check number is greater than 100 or not.
//
//
///////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if((iNo>100))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if((bRet==true))
    {
        printf("Number is Greater\n");
    }
    else
    {
        printf("Number is smaller\n");
    }
}