#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Write the program which accept number form user and return the 
//                         multipliacation of Digits.
//
//////////////////////////////////////////////////////////////////////////////////////////



int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iAns=1;
    if((iNo<0))
    {
        iNo=-iNo;   //Updater
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10 ; 
        if((iDigit ==0))
        {
            iDigit=1;
        }
        iAns = iAns *iDigit;
        iNo = iNo /10;
    }
    return iAns;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet= MultiDigits(iValue);
    printf(" Multiplication of Digits is : %d",iRet);

    return 0;
}