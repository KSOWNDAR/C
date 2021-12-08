Print the word with odd letters as
P         M
 R      A
   O  R
     G
  O    R
 R       A
P          M


#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=0;j<strlen(s);j++)
        {
            if(i==j)
            {
                printf("%c",s[i]);
            }
            else if(j==strlen(s)-i-1)
            {
                printf("%c",s[n-i-1]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
