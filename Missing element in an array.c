Input : 30 31 32 34 35
Output : 33

#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
        sum=sum+a[i];
    }
    min=min-1;
    int minsum=(min)*(min+1)/2;
    int maxsum=(max)*(max+1)/2;
    sum=sum+minsum;
    printf("%d",maxsum-sum);
    return 0;
}
