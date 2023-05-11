#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Find Factorial of number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factoial(int iNo)
{
    int iResult=1;
    int iCnt=1;
    while(iCnt<=iNo)
    {
        iResult=iResult*iCnt;
    }
    return iResult;
}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=Factoial(iValue);
}