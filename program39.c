#include<stdio.h>
#include<stdbool.h>

int Factoial(int iNo)
{
    int iCnt=0;
    int iAns=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iAns=iAns*iCnt;
    }
    return iAns;

}


int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter number : ");
   scanf("%d",&iValue);

   iRet =Factoial(iValue);

    printf("Result is : %d",iRet);

    
    return 0;
}