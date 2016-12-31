#include <stdio.h>

int main(void)
{
    int array[20],n,k,count=0;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter a number:");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(array[i]==k)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
