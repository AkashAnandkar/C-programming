#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which accept number from user and print its number line.
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
  int iCnt=0;
  for(iCnt=-iNo ; iCnt<=iNo ; iCnt++)
  {
    printf("%d\t",iCnt);
  }

}

int main()
{
    int iValue=0;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;


}