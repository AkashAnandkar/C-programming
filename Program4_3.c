#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement:  Write a program to accept two numbers and check they are same or not.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1,int iNo2)
{
    if((iNo1==iNo2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    bool bRet=false;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number : \n");
    scanf("%d",&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if((bRet==true))
    {
        printf("Numbers are Equal\n");

    }
    else
    {
        printf("Numbers are not equal\n");
    }

    return 0;
}