
Input : iittsssstt
Output : t

#include <stdio.h>
#include<string.h>

int main()
{
    char s[100],m;
    scanf("%[^\n]s",s);
    int count=0,maxcount=0;
    for(int i=0;i<strlen(s);i++)
    {
       count=0; 
       for(int j=i+1;j<strlen(s);j++)
       {
           if(s[i]==s[j])
           count++;
       }
       if(count>maxcount)
       {
           maxcount=count;
           m=s[i];
       }
    }
    printf("%c",m);

    return 0;
}
