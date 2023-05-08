#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and display its table.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    
    int iCnt= 0;
    int iNumber =0;
    if((iNo <0 ))
    {
        iNo = -iNo;       //Updater
    }
    

    for(iCnt=1 ; iCnt <=10 ; iCnt++)
    {
        iNumber = iNo * iCnt;
        printf("%d \n",iNumber);
    }
}

int main()
{
    int iValue =0;
    printf ("Enter Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}