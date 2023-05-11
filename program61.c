#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////
//
//   Check how many  even  digits is present  in number.
//
///////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit=0;
    int iCnt =0;
    if(iNo<0)
    {
        iNo=-iNo;       //Updater
    }
    while((iNo!=0))
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;
}

   
int main()
{
    int iValue=0;
    int iRet = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);
    iRet = CountEven(iValue);
    printf("Frequency of even number in %d is : %d",iValue,iRet);

   
}
