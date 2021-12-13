Alternate sorting: Given an array of integers, rearrange the array in such a way that the first element is first maximum and second element is first minimum.
   Eg.) Input  : {1, 2, 3, 4, 5, 6, 7}
         Output : {7, 1, 6, 2, 5, 3, 4}


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
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    int j=n-1,k=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        printf("%d ",a[k++]);
        else
        printf("%d ",a[j--]);
    }
}

