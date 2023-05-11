#include<stdio.h>
///////////////////////////////////////////////////////////////////
//
// Problem Statement : Display numbers on screen.
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf( "%d \n",iCnt);
    }

}


int main()
{
    int iValue=0;

    printf("Enter the number that we want to print numbers :\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}