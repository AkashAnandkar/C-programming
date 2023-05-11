#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////
//
//   Count Frequency of 8 in number .
//
///////////////////////////////////////////////////////////////////////////////////

int  CountFrequency(int iNo)
{
   int  iDigit=0;
   int iCnt = 0;
   if(iNo < 0)
   {
        iNo=-iNo;  //Updater
   }
    while( iNo!=0 )
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            iCnt++;
        }
        iNo =iNo /10;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

   iRet =  CountFrequency(iValue);
   printf("Frequency of 8 is : %d\n",iRet);

   
    return 0;
}