#include <stdio.h>
void printmatrix(int a[9][9],int n)
{
  for(int x=0;x<n;x++)
	{	
		printf("\n");
		for(int y=0;y<n;y++)
		{
			printf("%d\t",a[x][y]);
		}
	}
}
int main(void)
{
    int a[9][9],i,j,k=2,l,m,n;
	printf("enter the size of the square matrix:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("valid only for odd n");
		return 0;
	}
    //make all elements 0 initially
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			a[x][y]=0;
		}
	}
    //assign mid element in first row as 1
	a[0][n/2]=1;
	i=0;
	j=n/2;
	while(k<=n*n)
	{
		if(i==0)
		{
            l=n-1;
        }
		else
		{	
            l=i-1;
        }
		if(j==n-1)
		{	
            m=0;
        }
		else
		{	
            m=j+1;
        }
        //if the desired block is already filled
        if(a[l][m]!=0)
		{
            m=j;
			if(i==n-1)
			{
				l=0;
			}
			else
            {
				l=i+1;
            }
		}
        a[l][m]=k;
		i=l;
		j=m;
		k=k+1;;
	}
printmatrix(a,n);
return 0;
}
