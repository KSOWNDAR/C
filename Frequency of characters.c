Input : malayalam

Output: 
m-->2
a-->4
l-->2
y-->1


#include <stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int alpha[26]={0};
    scanf("%[^\n]s",s);
    int count=0,maxcount=0;
    for(int i=0;i<strlen(s);i++)
    {
       alpha[s[i]-'a']++;
    }
    for(int i=0;i<strlen(s);i++)
    {
        if(alpha[s[i]-'a']>0)
        {
           printf("%c-->%d\n",s[i],alpha[s[i]-'a']);
           alpha[s[i]-'a']=0;
        }
    }

    return 0;
}
