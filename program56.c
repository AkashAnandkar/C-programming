#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Check 8 is present in number or not
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckDigit(int iNo)
{
   int  iDigit=0;
    bool bFlag = false;
    while( iNo!=0 )
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            bFlag = true;
        }
        iNo =iNo /10;
    }
    return bFlag;
}

int main()
{
    int iValue=0;
    bool iRet = false;
    printf("Enter Number : ");
    scanf("%d",&iValue);

   iRet =  CheckDigit(iValue);

   if(iRet = true)
   {
        printf("Digit  8 is present in number.");
   }
   else
   {
    printf("Digit 8 is not present in number.");
   } 
    return 0;
}