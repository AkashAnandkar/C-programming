#include<stdio.h>
#include<stdbool.h>

int CountSpace(char *str)
{
    int iCount=0;
    while((*str!='\0'))
    {
        if((*str==' '))
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

    iRet=CountSpace(Arr);
    printf("Spaces  are  :%d",iRet);

    



    return 0;
}