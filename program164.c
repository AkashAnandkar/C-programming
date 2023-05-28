#include<stdio.h>
#include<stdbool.h>

int strlenDigitX(char *str)
{
    int iCount=0;
    while((*str!='\0'))
    {
        if((*str>='0')&&(*str<='9'))
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

    iRet=strlenDigitX(Arr);
    printf("Digits  are  :%d",iRet);

    



    return 0;
}