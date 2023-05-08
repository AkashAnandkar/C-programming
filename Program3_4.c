#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user and return summation of all its non factors.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;

    if((iNo<0))
    {
        iNo = -iNo;           //updater
    }
    for(iCnt=1 ; iCnt <=iNo ; iCnt++)
    {
        if((iNo % iCnt ) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("Summation of all non factors is :  %d ",iRet);
}