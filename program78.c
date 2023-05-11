
#include<stdio.h>
#include<stdlib.h>  
///////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers and Count the even numbers.
//
/////////////////////////////////////////////////////////////////////////////////////// 


 int CountEven(int Arr[],int iLength)
{
    
    int iCnt=0;
    int iCounter=0;
    for(iCnt = 0 ; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iCounter++;
        }
    }
    return iCounter;
    



}

int main()
{
    int iSize=0;
    int*ptr=NULL;    
    int iCnt=0; 
    int iRet =0;    

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the numbers of Array : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of Array are : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

  iRet= CountEven(ptr,iSize);
  printf("Count of Even number is : %d",iRet);
   

    free(ptr);


    return 0;
}