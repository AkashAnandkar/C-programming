#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user and return 
//                     difference between summation of all its factors and non factors.
//
//////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt=0;
    int iSumFact=0;
    int iSumNonFact=0;

    for (iCnt=1 ; iCnt<iNo ; iCnt++)
    {
        if((iNo % iCnt )==0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    printf("%d\n",iSumFact);
    printf("%d\n",iSumNonFact);
    return (iSumFact-iSumNonFact);
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("Difference of between factors and non-factors is : %d ",iRet);

    return 0;
}