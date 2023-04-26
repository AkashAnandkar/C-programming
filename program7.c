

///////////////////////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Write a program which whether number is divisible by 3 and 5
//
////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>   //For bool data type
//
///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisible
// Input         : Integer
// Output        : Boolean
// Description   : Checks whether input is divisible by 3 and 5
// Author        : Akash Subhash Anandkar
// Date          : 25/04/2023
//
///////////////////////////////////////////////////////////////////////////////////////
bool CheckDivisible(int iNo)
{
    if(((iNo%3)==0) && ((iNo%5)==0)) 
    {
        return true;
    }
    else
    {
        return false;
    }

}


///////////////////////////////////////////////////////////////////////////////////////
// Entry Point Function
////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue=0;
    bool bRet=false;
    printf("Please Enter number to check the whether it is divisible by 3 AND 5: \n");
    scanf("%d",&iValue);

    bRet=CheckDivisible(iValue);
    
    if((bRet==true))
    {
        printf("%d is completely divisible by 3 AND 5 \n",iValue);
    }
    else
    {
        printf("%d is not completly divisible by 3 AND 5  \n",iValue);
    }
    return 0;
}