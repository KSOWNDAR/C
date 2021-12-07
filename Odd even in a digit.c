INPUT : 25678
OUTPUT:
EVEN:268
ODD:57

#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);
    int zero1=1,zero2=1,even=0,odd=0;
    while(n!=0)
    {
        int r=n%10;
        if(r%2==0)
        {
            even=(r*zero1)+even;
            zero1=zero1*10;
        }
        else     
        {
            odd=(r*zero2)+odd;
            zero2=zero2*10;
        }
        n=n/10;
    }
    printf("EVEN:%d\n",even);
    printf("ODD:%d",odd);
    return 0;
}
