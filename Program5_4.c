#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts N from user and print all
//                      odd numbers upto N.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt=0;
    for (iCnt=1 ; iCnt<=iNo ; iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
   int iValue=0;
   printf("Enter the number : ");
   scanf("%d",&iValue);

   OddDisplay(iValue);



    return 0;
}