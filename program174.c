#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1
int LastOccurance(char*str,char cValue)
{
    int iCnt=1;
    int iPos=ERR_NOTFOUND;
    while(*str!='\0')
    {
        if(*str==cValue)
        {
            iPos=iCnt;
            
        }
        str++;
        iCnt++;
    }
    return iPos;   
}
int main()
{
    int iRet=0;
    char Arr[20];
    char ch='\0';
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the chareacter : \n");
    scanf(" %c",&ch);

    iRet=LastOccurance(Arr,ch);
    if(iRet==ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else{
    printf("Last  occurance of character is at : %d",iRet);
    }

    return 0;
}