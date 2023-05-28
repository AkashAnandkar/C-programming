#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Find Gievn number is present in array or not.
//
////////////////////////////////////////////////////////////////////////////////////////////

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt =0;
    bool bFlag=false;
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        if((iNo==Arr[iCnt]))                        //With Flag
        {
            return bFlag =true;
            break;
        }
        
    }
    return bFlag;
}

int main()
{
        int iSize=0;
        int iValue =0;
        
        int*ptr = NULL;
        int iCnt=0;
        bool bRet = false;

        printf("Enter the number of elements : ");
        scanf("%d",&iSize);

        ptr = (int*)malloc(iSize*sizeof(int));
        
        printf("Enter the elements :\n");
        for(iCnt=0 ; iCnt<iSize ; iCnt++)
        {
            scanf("%d",&ptr[iCnt]);
        }

        printf("Enter the number that you want to Find : \n");
        scanf("%d",&iValue);


        printf("Elements of the array are : \n");
        for(iCnt=0 ; iCnt<iSize ; iCnt++)
        {
            printf("%d\n",ptr[iCnt]);
        }

        bRet = Search(ptr,iSize,iValue);
        if((bRet==true))
        {
            printf("The %d is present.",iValue);
        }
        else{
            printf("The %d is not present.",iValue);
        }

    

    
        
        free(ptr);



    return 0;
}