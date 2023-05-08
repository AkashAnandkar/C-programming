#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a Program which accept number from user and if number is less than 50 then
//                      print small,if it is greater than 50 and less than 100 print medium,if it is greater
//                        than 100 then print large.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if((iNo < 0))
    {
        iNo = -iNo;       //Updater
    }

    if((iNo <50))
    {
        printf("%d is Small number.",iNo);
    }
    else if ((iNo >= 50) && (iNo <100))
    {
        printf("%d is Medium Number.",iNo);
    }
    else if ((iNo >= 100))
    {
        printf("%d is large number.",iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Number(iValue);

    return 0;
}