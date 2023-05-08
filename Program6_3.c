#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Write a program to find factorial of given number . 
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{

    if ((iNo < 0))
    {
        iNo = -iNo;        //Updater
    }

    int iFact=1;
    int iCnt=0;
    for(iCnt=1 ; iCnt<=iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue =0;
    int iRet=0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

      iRet = Factorial(iValue);
     printf("Factorials of  %d is : %d",iValue,iRet);

    return 0;
}