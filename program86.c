#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
////////////////////////////////////////////////////////////////////////////////////////////

void MaximumMinimum(int Arr[0],int iLength)
{

    int iCnt=0;
    int iMax=Arr[0];
    int iMin = Arr[0];
    for(iCnt=0 ; iCnt <iLength ; iCnt++)
    {
        if((Arr[iCnt]>iMax))
        {
            iMax=Arr[iCnt];
        }
        if((Arr[iCnt]<iMin))
        {
            iMin=Arr[iCnt];
        }
    }
    printf("Maximum number is : %d\n",iMax);
     printf("Minimum number is : %d\n",iMin);
    
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

        MaximumMinimum(ptr,iSize);

    
        
        free(ptr);



    return 0;
}