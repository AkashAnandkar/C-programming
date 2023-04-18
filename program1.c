

/*
    Algoritham

    Start
            Accept First number as No1
            Accept second number as No2
            create one variable as Ans
            Perform Addition of No1 and No2
            store the addition into variable Ans
            Display the value of Ans
    Stop


*/

///////////////////////////////////////////////////////////////////////////////
//
// Problem Statment : Write a program which performs Addition of two numbers.

///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: Addition
//Input:         unsigned int,unsigned int
//Output:        unsigned int
//Description:   Performs the Addition of two numbers
//Author:         Akash Subhash Annadkar
//Date:          18/04/2023
//
///////////////////////////////////////////////////////////////////////////////
unsigned int Addition(unsigned iValue1,unsigned iValue2)
{ 
    unsigned int iResult=0;

    iResult = iValue1 + iValue2;
    return iResult;
}
//////////////////////////////////////////////////////////////////////////////
//Entry Point Function
///////////////////////////////////////////////////////////////////////////////


int main()

{
     unsigned int iNo1=0;
     unsigned  int iNo2=0;
     unsigned int iAns =0;
    printf("Enter first Number : ");
    scanf("%d",&iNo1);

    printf("Enter second Number : ");
    scanf("%d",&iNo2);

    iAns=Addition(iNo1,iNo2);
    printf("Addition is :%d ",iAns);


    return 0;
}

