#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accepts number from user and display its factors in decreasing format.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt=0;
    for(iCnt=(iNo-1) ; iCnt>0 ;iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);


    FactRev(iValue);

    return 0;
}