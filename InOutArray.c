#include<stdio.h>

int main()
{

    int iSize=0;
    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    int Arr[iSize];
    printf("Enter the elements of Array: \n");
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Elements of array are : \n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }



    return 0;
}