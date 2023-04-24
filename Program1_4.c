//////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept one number and check whether
//                      it is divisible by 5 or not.
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
# define True 1
# define False 0

BOOL Check( int iNO)
{

    if((iNO%5)==0)
    {
        return True;

    }
    else
    {
        return False;
    }
}
int main()
{
    int iValue =0;
    BOOL bRet=False;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet=Check(iValue);
    if(bRet==True)
    {
        printf("Divisible by 5");
    }
    else 
    {
        printf("Not Divisible 5");
    }
    return 0;
}