Input : 10 20 10 20 20 30 

Output : 
10-->2
20-->3
30-->1


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int k=i-1;k>=0;k--)
        {
            if(a[i]==a[k])
            count=0;
        }
        if(count==0)
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        printf("%d-->%d\n",a[i],count);
    }
    return 0;
}

