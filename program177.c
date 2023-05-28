#include<stdio.h>
#include<stdlib.h>

void EditString(char*str)
{
    while(*str!='\0')
    {
        if((*str>='A') &&(*str<='Z'))
        {
            *str='*';
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

    EditString(Arr);
    printf("String after editing is : %s\n",Arr);
   

    return 0;
}