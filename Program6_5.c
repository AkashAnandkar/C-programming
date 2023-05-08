#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which acccept number from user and display its table in reverse.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ReverseTable(int iNo)
{
    int iCnt=0;
    int iNumber =0;
    if((iNo < 0 ))
    {
        iNo = -iNo;        //Updater
    }
    for(iCnt =10 ; iCnt >=1 ;iCnt--)
    {
        iNumber = iNo * iCnt;
        printf("%d\t",iNumber);
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number  : ");
    scanf("%d",&iValue);

    ReverseTable(iValue);

    return 0;
}