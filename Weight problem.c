Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the following conditions
    1. 5 if a perfect square
    2. 4 if multiple of 4 and divisible by 6
    3. 3 if even number
And sort the numbers based on the weight and print it as follows
<10,its_weight>,<36,its weight><89,its weight>
Should display the numbers based on increasing order.


#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],weight;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        weight=0;
        int sq=sqrt(a[i]);
        if((sq*sq)==a[i])
        {
            weight+=5;
        }
        if(a[i]%4==0 && a[i]%6==0)
        {
            weight+=4;
        }
        if(a[i]%2==0)
        {
            weight+=3;
        }
        b[i]=weight;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
                int t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf(" <%d,%d> ",a[i],b[i]);
    }
    return 0;
}
      
