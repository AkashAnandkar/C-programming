#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////
//
//   Problem Statement : Write a program which accept number form user and return difference
//                         between summation of even digits and summation of Odd digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit=0;
    int iEvenSum=0;

    int iOddSum=0;
    int iDiff = 0;

    while(((iNo!=0)))
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo /10;
    } 

    iDiff = iEvenSum - iOddSum;
    return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("Difference beteen even and odd of digits is : %d",iRet);

    return 0;
}