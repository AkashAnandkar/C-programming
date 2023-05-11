#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
   int  iDigit=0;
    while( iNo!=0 )
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            break;
        }
        iNo =iNo /10;
    }
    if(iDigit == 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool iRet = false;
    printf("Enter Number : ");
    scanf("%d",&iValue);

   iRet =  CheckDigit(iValue);

   if(iRet == true)
   {
        printf("Digit  8 is present in number.");
   }
   else
   {
    printf("Digit 8 is not present in number.");
   } 
    return 0;
}