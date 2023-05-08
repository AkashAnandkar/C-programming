#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept N and print first 5 multiples of N.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    int iMultiples=1;
    for(iCnt=1 ; iCnt<=5 ; iCnt++)
    {
        iMultiples = iCnt * iNo;;
        printf("%d\t",iMultiples);

    }
    
}



int main()
{
    int iValue=0;
    printf("Enter Nuumber  : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}