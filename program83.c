#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N number form user and  Find Maximum number in given numbers.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[],int iLength)
{
   int iCnt=0;
    int iMax = Arr[0];
    for(iCnt=0 ; iCnt < iLength ; iCnt++)
    {
       if((Arr[iCnt]>iMax))        //O(N)
        {
           iMax=Arr[iCnt];
         }
    }
  return iMax;

}


int main()
{
        int iSize=0;
        int iRet=0;
        int*ptr = NULL;
        int iCnt=0;

        printf("Enter the number of elements : ");
        scanf("%d",&iSize);

        ptr = (int*)malloc(iSize*sizeof(int));
        
        printf("Enter the elements :\n");
        for(iCnt=0 ; iCnt<iSize ; iCnt++)
        {
            scanf("%d",&ptr[iCnt]);
        }

        printf("Elements of the array are : \n");
        for(iCnt=0 ; iCnt<iSize ; iCnt++)
        {
            printf("%d\n",ptr[iCnt]);
        }
        
        iRet = Maximum(ptr,iSize);
        printf("Maximum number is : %d",iRet);
        free(ptr);



    return 0;
}