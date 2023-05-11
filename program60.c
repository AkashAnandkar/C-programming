#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////
//
//   Check how many times digits is present  in number.
//
///////////////////////////////////////////////////////////////////////////////////

int CountDigit(int iNo,int iSearch)
{
    int iDigit = 0;
    int iCnt=0;

    if ((iSearch < 0)|| (iSearch > 9))
    {
        printf("Enter the number between 0 to 9\n");  // Filter
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
     while(iNo!=0)
     {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCnt++;
        }
        iNo = iNo/10;
     }
     return iCnt;
    }

int main()
{
    int iValue=0;
    int SingleDigit = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Digit : \n");
    scanf("%d",&SingleDigit);

   iRet =  CountDigit(iValue,SingleDigit);
   printf("%d is present %d times in %d",SingleDigit,iRet,iValue);
   
}
