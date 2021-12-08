INPUT : 2025   
 
OUTPUT : 2025 is TECH NUMBER

TECH NUMBER:
2025=(20+25)=45---->square(45)=2025  2025=2025 
  

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int no=n,zero=1,support=0,count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    if(count%2==0)
    {
        int i=1;
        while(i<=count/2)
        {
            zero=zero*10;
            i++;
        }
        support=(no/zero)+(no%zero);
        support=support*support;
        if(support==no)
        printf("%d is TECH NUMBER",no);
        else
        printf("%d is not TECH NUMBER",no);
    }
    return 0;
}
  
