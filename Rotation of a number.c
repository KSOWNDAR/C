Rotation of Number
Input 25678 
Rotation 3

Output 67825

Code:

#include <stdio.h>

int main()
{
    int n,rotation;
    scanf("%d %d",&n,&rotation);
    int count=1,zero=1,no=0;
    while(n!=0)
    {
        int r=n%10;
        n=n/10;
        count++;
        no=(r*zero)+no;
        zero=zero*10;
        if(count>rotation)
        break;
    }
    printf("%d%d",no,n);
}
