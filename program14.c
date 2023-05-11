#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Accept the number from user and Display that number of times"Jay Ganesh " on screen.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
     int iCnt=0;  
     if(iNo < 0)         //Updator
     {
        iNo=-iNo;
        
     } 

     for(iCnt=1; iCnt<=iNo; iCnt++)
     {
        printf("Jay Ganesh...\n");
     }
}


int main()
{
    int iValue=0;

    printf("Enter the number how many times you want to Display: \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}


