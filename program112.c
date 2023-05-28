#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Display number line
//          
//
//////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt=0;
    
    for(iCnt=-iNo ; iCnt< iNo+1 ; iCnt++)
    {
        printf("%d\t",(iCnt));
        
    }
   

    

}


int main()
{
    int iFrequency=0;
    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}