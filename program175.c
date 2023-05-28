#include<stdio.h>
#include<stdlib.h>

void Frequency(char*str)
{
    int iSmallCnt=0;
    int iCapCnt=2;
    while(*str!='\0')
    {
        if((*str>='a')||(*str<='z'))
        {
            iSmallCnt++;
        }
        else if ((*str>='A')||(*str<='z'))
        {
            iCapCnt++;

         }
         str++;
    
    }
    printf("Small Case : %d\n",iSmallCnt);
    printf("Capital count  : %d\n",iCapCnt);
}
int main()
{
    int iRet=0;
    char Arr[20];
    char ch='\0';
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Frequency(Arr);
   

    return 0;
}