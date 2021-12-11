Input : 10 20 30 40 50 
Rotate : 3

Output : 40 50 10 20 30

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int rotation,count=1;;
    scanf("%d",&rotation);
    while(count<=n)
    {
        printf("%d ",a[rotation++]);
        if(rotation==n)
        rotation=0;
        count++;
    }
}
