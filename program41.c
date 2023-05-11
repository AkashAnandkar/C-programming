////////////////////////////////////////////////////////////////////////////////////////////////////
//
//        Display Factorial of Number
//
////////////////////////////////////////////////////////////////////////////////////////////////////




#include<stdio.h>
typedef unsigned int ULONG;
ULONG Factoial(int iNo)
{

    if(iNo<0)
    {
        iNo=-iNo;       //updater
    }
    int iCnt=0;
    ULONG iAns=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iAns=iAns*iCnt;
    }
    return iAns;

}


int main()
{
   int iValue=0;
   ULONG iRet=0;
   printf("Enter number : ");
   scanf("%d",&iValue);

   iRet =Factoial(iValue);

    printf("Result is : %d",iRet);

    
    return 0;
}