#include<stdio.h>
#include<stdlib.h>
void strncatX(char*src,char*dest,int iLength)
{
    while((*dest!=0))
    {
        dest++;
    }
    while ((*src!='\0')&&(iLength!=0))
    {
        *dest=*src;
        dest++;
        src++;
        iLength--;
       
    }
    *dest='\0';
    

       
}
int main()
{
    
    char Arr[20];
    char Brr[20]="Demo";
    int iNo=0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the number of letters that you want to concat : \n");
    scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);
    printf("String after copy is : %s\n",Brr);
   

    return 0;
}