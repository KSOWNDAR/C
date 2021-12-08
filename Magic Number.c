Input : 262

Output : Magic Number

Input : 250
Output : Not a magic number

MAGIC NUMBER : 
    262 --> 2+6+2 = 10 --> 1+0 =1
   Sum of digits to single digit is equal to 1 is called MAGIC NUMBER.

#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int sum=0;
   while(n!=0)
   {
       int r=n%10;
       sum=sum+r;
       n=n/10;
       if(sum>9 && n==0)
       {
           n=sum;
           sum=0;
       }
   }
   if(sum==1)
   printf("Magic Number");
   else
   printf("Not a magic number");
   return 0;
}
