#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Find Gievn number is present in array or not.
//
////////////////////////////////////////////////////////////////////////////////////////////

int  SearchFirstOccurance(int Arr[],int iLength,int iNo)
{

    int iCnt =0;
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            break;
        }
    }
    if(iCnt==iLength)
    {
        return -1;
    }
    else{
        return iCnt;
    }
    
    
}

int main()
{
        int iSize=0;
        int iValue =0;
        
        int*ptr = NULL;
        int iCnt=0;
        int iRet = 0;

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

        iRet = SearchFirstOccurance(ptr,iSize,iValue);
        if((iRet==-1))
        {
            printf("There is no such elememts \n");
        }
        else
        {
            printf("%d Occured at %d",iValue,iRet);
        }
       
    

    
        
        free(ptr);



    return 0;
}