////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept two numbers form user and display first number in second number times.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int Number=iNo;
    int iFre=iFrequency;

    int iCnt=0;
    for(iCnt=0;iCnt<=iFre;iCnt++)
    {
        printf("%d ",Number);
    }
}


int main()
{
    int iValue=0;
    int iFrequency=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iFrequency);

    Display(iValue,iFrequency);
    return 0;
}