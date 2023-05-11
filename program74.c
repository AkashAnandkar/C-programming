///////////////////////////////////////////////////////////////////////
//
//  Dyanamic Memory Alloction for Array
//
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>   //Dynamic Memory Management

int main()
{
    int iSize=0;
    int*ptr=NULL;    
    int iCnt=0;     //loop Counter

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


    return 0;
}