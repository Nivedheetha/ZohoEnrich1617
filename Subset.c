#include <stdio.h>
#include<math.h>
int main(void) 
{
	int n,n1,j,num,rem,i;
	printf("enter size of set:\n");
	scanf("%d",&n);
	n1=pow(2,n);
	int set[n],a[n1][n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&set[i]);
	}
	for(i=0;i<n1;i++)
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
	}
	return 0;
}
