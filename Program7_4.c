#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write program which Accept number from user and 
//                         count Frequency of 4 in it.
//
//////////////////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt=0;

    while(iNo!=0)
    {
        iDigit = iNo % 10 ; 
        if((iDigit ==4))
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt++;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet= CountFour(iValue);
    printf("Digit 4 is %d times present in %d",iRet,iValue);

    return 0;
}