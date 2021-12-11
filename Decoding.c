
Input a4b3c5
Output aaaabbbccccc


#include <stdio.h>
#include<string.h>

int main()
{
    char s[100],s1[100];
    scanf("%[^\n]s",s);
    int k=0;
    for(int i=0;i<strlen(s);i+=2)
    {
       int count=s[i+1]-48;
       while(count!=0)
       {
           s1[k++]=s[i];
           count--;
       }
    }
    printf("%s",s1);

    return 0;
}
