#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG CalculatePower(int ibase, int ipower)
{
    int iCnt=0;
    ULONG  Ans=1;

     if((ibase<0) || (ipower<0))  //Filter
     {
        return 0;
     }
    for(iCnt=1; iCnt<=ipower; iCnt++)
    {
        Ans=Ans * ibase;
    }
    return Ans;
    
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    ULONG iAns=0;
    

    printf("Enter Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Number :\n");
    scanf("%d",&iValue2);

    iAns=CalculatePower(iValue1,iValue2);
    printf("Answer is : %ld",iAns);


    
    return 0;
}