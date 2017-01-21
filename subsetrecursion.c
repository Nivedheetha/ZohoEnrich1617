#include <stdio.h>
#include<math.h>
int num,rem,j,n,n1;
void subs(int a[n1][n],int set[n],int i)
{
	num=i+1;
	for(j=0;j<n;j++)
	{
		rem=num%2;
		a[i][j]=rem;
		num=num/2;
		if(a[i][j]==1)
		{
			printf("%d,",set[j]);
		}
	}
	printf("\n");
	i++;
	if(i==n1)
	{
		return;
	}
	subs(a,set,i);
}
int main(void) 
{
	int i;
	printf("enter size of set:\n");
	scanf("%d",&n);
	n1=pow(2,n);
	int set[n],a[n1][n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&set[i]);
	}
	i=0;
	subs(a,set,i);
	return 0;
}
