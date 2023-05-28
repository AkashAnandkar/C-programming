#include<stdio.h>
#include<stdbool.h>

int strlenCapitalX(char *str)
{
    int iCount=0;
    while((*str!='\0'))
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCount++;

        }
        str++;
        
    }
    return iCount;
}



int main()
{
    int iRet=0;
    char Arr[40];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet=strlenCapitalX(Arr);
    printf("Capitals  letters are :%d",iRet);

    



    return 0;
}