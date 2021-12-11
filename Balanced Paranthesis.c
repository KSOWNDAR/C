#include <stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    int s=0,f=0,o=0;
    scanf("%[^\n]s",s1);
    for(int i=0;i<strlen(s1);i++)
    {
        if(s1[i]=='[')
        s++;
        else if(s1[i]==']')
        s--;
        else if(s1[i]=='{')
        f++;
        else if(s1[i]=='}')
        f--;
        else if(s1[i]=='(')
        o++;
        else
        o--;
    }
    if(s==0 && f==0 && o==0)
    printf("Balanced");
    else
    printf("Unbalanced");

    return 0;
}


