Reverse a number
Input 25678
Output 87652

Using while:

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d",n%10);
        n=n/10;
    }
}

Using recursion:

#include <stdio.h>

int reversenum(int n,int sum)
{
    if(n==0)
    return sum;
    else
    {
        int r=n%10;
        sum=sum*10+r;
        reversenum(n/10,sum);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reversenum(n,0));
}
