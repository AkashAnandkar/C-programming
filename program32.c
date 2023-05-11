#include<stdio.h>
#include<stdbool.h>

int  CalculatePower(int ibase, int ipower)
{
    int iCnt=0;
    int Ans=1;
    for(iCnt=1;iCnt<=ipower;iCnt++)
    {
        Ans=Ans * ibase;
    }
    return Ans;
    
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iAns=0;
    

    printf("Enter Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Number :\n");
    scanf("%d",&iValue2);

    iAns=CalculatePower(iValue1,iValue2);
    printf("Answer is : %d",iAns);


    
    return 0;
}