////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one number from user and print that number 0f * on screen by using while loop.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{   
   int iCnt=0;
    while ( iCnt<=iNo)
    {
        printf("*  ");
        iCnt++;

    }

}
int main()
{
    int  iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}