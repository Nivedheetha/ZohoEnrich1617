#include <stdio.h>
#include<math.h>
int main(void) 
{
	int n,n1,set[5],j,a[32][3],num,rem,i;
	printf("enter size of set:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&set[i]);
	}
	n1=pow(2,n);
	num=1;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n;j++)
		{
			rem=num%2;
			a[i][j]=rem;
			num=num/2;
			if(a[i][j]==1)
			{
				printf("%d ",set[j]);
			}
		}
		printf("\n");
		num=i+2;
	}
	return 0;
}
