#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user and display its non factors.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NonFact(int iNo)
{
    int iCnt=0;
    for(iCnt=1 ; iCnt<=iNo ; iCnt++)
    {
        if((iNo % iCnt) !=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}