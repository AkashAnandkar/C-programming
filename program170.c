#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char cValue)
{
    int iCount=0;
    while((*str!='\0'))
    {
        if((*str==cValue))
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

    char ch='\0';

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter the charecter: \n");
    scanf("%c",&ch);

    iRet=CountChar(Arr,ch);
    printf("Number of Occurances are : %d",iRet);
    return 0;
}

