
Input 
5
10 20 10 20 10

Output 10

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
    int max=0;
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count>max)
            {
                max=i;
            }
        }
    }
    printf("%d",a[max]);
}
