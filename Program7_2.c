#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//   Problem Statement : Write a program which accept number form user and check whether 
//                        it contains 0 in it or not.
//
///////////////////////////////////////////////////////////////////////////////////////////

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool bAns=false;
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bAns = true;
            break;
        }
        iNo = iNo /10;
    }
    return bAns;
}

int main()
{
        int iValue=0;
        bool bRet=false;

        printf("Enter Number : \n");
        scanf("%d",&iValue);

        bRet = CheckZero(iValue);

        if(bRet == true)
        {
            printf("%d has a 0 as a Digit\n",iValue);
        }
        else
        {
            printf("%d has no 0 digit in it.",iValue);
        }

    return 0;
}