Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search for substring like “too” in the two dimensional string both from left to right and from top to bottom.
w	e	L	C	O
M	E	T	O	Z
O	H	O	C	O
R	P	O	R	A
T	I	O	n	
And print the start and ending index as
Start index : <1,2>
End index: <3, 2>

#include <stdio.h>

int main()
{
    char *s="welcometozohocorporation";
    char a[5][5];
    int x=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            a[i][j]=s[x++];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]=='t' && a[i][j+1]=='o' && a[i][j+2]=='o')
            {
                printf("Start index : <%d,%d> \n",i,j);
                printf("End index : <%d,%d> \n",i,j+2);
            }
            else if(a[i][j]=='t' && a[i+1][j]=='o' && a[i+2][j]=='o')
            {
                printf("Start index : <%d,%d> \n",i,j);
                printf("End index : <%d,%d> \n",i+2,j);
            }
        }
    }

    return 0;
}
  
