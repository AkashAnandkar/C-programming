#include<stdio.h>


int main()
{
    int iSize=0;
    int Sum=0;
     
     printf("Enter the size of Array :\n");
     scanf("%d",&iSize);

     int Arr[iSize];

     printf("Enter the Elements of array : \n");
      int iCnt=0;
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
        scanf("%d",&Arr[iCnt]);
     }

     for(iCnt=0;iCnt<iSize;iCnt++)
     {
        Sum=Sum+Arr[iCnt];
     }
     printf("Sum of all elements of array is : %d",Sum);
     return 0;
}

    
