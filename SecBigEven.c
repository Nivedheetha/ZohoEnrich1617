#include <stdio.h>
int main(void) {
	// your code goes here
	int a[10],b[10],n,k=0,temp,i,g,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(j=0;j<k-1;j++)
	{
		for(g=j+1;g<k;g++)
		{
			if(b[j]>b[g])
			{
				temp=b[j];
				b[j]=b[g];
				b[g]=temp;
			}
		}
	}
	printf("%d",b[k-2]);
	return 0;
}
