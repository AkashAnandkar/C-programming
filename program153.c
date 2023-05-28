#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
   if((cValue>='A') && (cValue<='Z'))
   {
    return true;
   } 
   else{
    return false;
   }
}


int main()
{
    char ch='\0';
    bool bRet=false;

    printf("Enter Character : \n");
    scanf("%c",&ch);

    bRet=CheckCapital(ch);
    if(bRet==true)
    {
        printf("%c is Capital Letter \n",ch);
    }
    else
    {
        printf("%c is not Capital letter \n",ch);
    }
    return 0;
}