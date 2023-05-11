
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Display the factors of given numbers.
//
///////////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
     int iCnt=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)  //O(N/2)
    {
        if((iNo%iCnt)==0)
        {
        printf("%d\n",iCnt);
        }
    }

}

/////////////////////////////////////////////////////////////////////////////////
// 
//            Entry Point function
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    printf("Factors of Given number are : \n");
    DisplayFactors(iValue);

    return 0;
}
