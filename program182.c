#include<stdio.h>
#include<stdlib.h>

void strtoggleX(char*str)
{
    int Gap='a'-'A';
    while(*str!='\0')
    {
        if((*str>='a') &&(*str<='z'))
        {
            *str=*str-Gap;
        }
        else if ((*str>='A')&&(*str<='Z'))
        {
            *str=*str+Gap;
        }
       
        
        str++;
    }

}

int main()
{
    int iRet=0;
    char Arr[20];
    char ch='\0';
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);
    printf("String after editing is : %s\n",Arr);
   

    return 0;
}