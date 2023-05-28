#include<stdio.h>
/*
   character Swapping

*/

void strrevX(char *str)
{
    char*start=NULL;
    char*end=NULL;
    char cTemp='\0';
    start=str;
    end=str;
    while(*end!='\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        cTemp=*start;
        *start=*end;
        *end=cTemp;

        start++;
        end--;
    }

}
 int main()
 {
    char Arr[20];
   
    printf("Enter first string : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);
    printf("Reverse string is :%s",Arr);
    

    return 0;
 }