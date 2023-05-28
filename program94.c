#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//       Input : 7
//       Output: #  #   #   #   #   #   #
//
//       Input : 3
//       Output: #  #   #   
//          
//
//////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1 ; iCnt<=iNo ; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");

}


int main()
{
    int iFrequency=0;
    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}