#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
//   Display Digits of number
//
///////////////////////////////////////////////////////////////////////////////////
void DisplayDigits(int iNo)
{
   int  iDigit=0;
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;

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