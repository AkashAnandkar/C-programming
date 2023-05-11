#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////
//
//   Check digit is present in number or not.
//
///////////////////////////////////////////////////////////////////////////////////

bool CheckDigit(int iNo,int iSearch)
{
    int iDigit = 0;

    if ((iSearch < 0)|| (iSearch > 9))
    {
        printf("Enter the number between 0 to 9\n");
        return false;
    }
    if(iNo<0)
    {
        iNo=-iNo;          //Updater
    }
     while(iNo!=0)
     {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            break;
        }
        iNo = iNo/10;
     }
     if((iDigit == iSearch))
     {
        return true;
     }
     else{
        return false;
     }
    
  
  
}

int main()
{
    int iValue=0;
    int SingleDigit = 0;
    bool bRet = false;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Digit : \n");
    scanf("%d",&SingleDigit);

   bRet =  CheckDigit(iValue,SingleDigit);
   if(bRet==true)
   {
    printf("%d is present in %d",SingleDigit,iValue);
   }
   else
   {
    printf("%d is not present in %d",SingleDigit,iValue);
   }

   
    return 0;
}