#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : "$"    "*" Draw pattrn
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattrn(int iNo)
{

    int iCnt=0;
    for(iCnt=1 ; iCnt<=iNo ; iCnt++)
    {
        printf("$\t *\t");
    }

}

int main()
{
    int iValue=0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattrn(iValue);

    return 0;
}