#include<stdio.h>
#include<stdlib.h>
void strcpyX(char*src,char*dest,int iLength)
{
    while((*src!='\0')&&(iLength!=0))
    {
        *dest=*src;
        src++;
        dest++;
        iLength--;
    }
    *dest='\0';
}


int main()
{
    
    char Arr[20];
    char Brr[20];
    int iNo=0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the the number of that charaecters that you want to copy: \n");
    scanf("%d",&iNo);

    strcpyX(Arr,Brr,iNo);
    printf("String after copy is : %s\n",Brr);
   

    return 0;
}