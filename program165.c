#include<stdio.h>
#include<stdbool.h>

int CountVowels(char *str)
{
    int iCount=0;
    while((*str!='\0'))
    {
        if((*str=='a') || (*str=='e') ||(*str=='i') ||(*str=='o') ||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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

    iRet=CountVowels(Arr);
    printf("Digits  are  :%d",iRet);

    



    return 0;
}