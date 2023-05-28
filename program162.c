#include<stdio.h>
#include<stdbool.h>

int strlenSmallX(char *str)
{
    int iCount=0;
    while((*str!='\0'))
    {
        if((*str>='a')&&(*str<='z'))
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

    iRet=strlenSmallX(Arr);
    printf("Length of Small letter is :%d",iRet);

    



    return 0;
}