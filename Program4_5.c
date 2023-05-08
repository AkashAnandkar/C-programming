#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : write a program which accepts total marks and obtained marks from user and calculate percentage.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1,int iNo2)
{

    if((iNo1==0) || (iNo2==0))
    {
        printf("Invalid Input\n");
    }
    float fAns=0.0f;
    fAns = (float)iNo1/iNo2*100;
    return fAns;

}


int main()
{
    int iTotalMarks=0;
    int iObtainedMarks=0;
    float fPercentage=0.0f;

    printf("Enter the total marks  : \n");
    scanf("%d",&iTotalMarks);

    printf("Enter Obtained Marks : \n");
    scanf("%d",&iObtainedMarks);

    fPercentage = Percentage(iObtainedMarks,iTotalMarks);

    printf("Percentage is  : %.2f%%",fPercentage);
    return 0;
}