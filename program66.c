#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//   Find Average of digits in number 
//
////////////////////////////////////////////////////////////////////////////////////////////

float DigitAverage( int iNo)
{

    int iDigit = 0;
int iCnt=0;
int iSum =0;
float fAvg =0.0f;
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCnt ++;
        
        iNo = iNo /10;
    }

    fAvg = (float)iSum/(float)iCnt;
    return fAvg;

}

int main()
{
    int iValue =0;

    float fRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    fRet = DigitAverage(iValue);
    printf("Average of Digits is :  %f ",fRet);

    return 0;
}