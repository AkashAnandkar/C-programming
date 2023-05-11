#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Display Digits of Number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
   int  iDigit=0;
    for(; iNo!=0 ; iNo = iNo/10)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
       

    }
}

int main()
{
    int iValue=0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}