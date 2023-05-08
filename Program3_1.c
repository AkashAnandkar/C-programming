#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : write Program which accept number from user and display its multiplication of factors.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt=0;
    int iAns=1;
    for(iCnt=1 ; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iAns = iAns * iCnt;
        }
    }
    return iAns;

}




int main()
{
        int iValue =0;
        int iRet=0;

        printf("Enter the number : ");
        scanf("%d",&iValue);

        iRet =MultFact(iValue);

        printf("The multiplication of  factors of %d is : %d",iValue,iRet);

    return 0;
}