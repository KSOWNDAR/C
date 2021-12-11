Encoding:
Input aaaabbbccccc
Output a4b3c5


#include <stdio.h>
#include<string.h>

int main()
{
    char s[100],s1[100];
    scanf("%[^\n]s",s);
    int k=0;
    for(int i=0;i<strlen(s);i++)
    {
        int count=1;
        s1[k++]=s[i];
        while(s[i]==s[i+1])
        {
            count++;
            i++;
        }
        s1[k++]=count+48;
    }
    printf("%s",s1);

    return 0;
}
