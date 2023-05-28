#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str)
{
    int iCount=0;
    while((*str!='\0'))
    {
        if((*str=='z'))
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

    iRet=CountChar(Arr);
    printf("Z is present  %d times",iRet);

    



    return 0;
}