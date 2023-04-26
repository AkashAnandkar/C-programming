////////////////////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Write a program wheather number is even or odd.
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>   //For bool data type
//
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Input         : Integer
// Output        : Boolean
// Description   : Checks whether input is even or odd
// Author        : Akash Subhash Anandkar
// Date          : 25/04/2023
//
////////////////////////////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}


/////////////////////////////////////////////////////////////////////////////////////
// Entry Point Function
/////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue=0;
    bool bRet=false;
    printf("Please Enter number to check the whether it is even or odd: \n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    
    if((bRet==true))
    {
        printf("%d is Even Number \n",iValue);
    }
    else
    {
        printf("%d is Odd Number \n",iValue);
    }
    return 0;
}