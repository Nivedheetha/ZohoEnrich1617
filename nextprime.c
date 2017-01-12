#include <stdio.h>
 int main(void) 
 {
	// your code goes here
	int i,n,flag,prime=0,n1;
	printf("enter the number");
	scanf("%d",&n);
	n1=n+1;
	do
	{
		flag=0;
		for(i=2;i<=n1/2;i++)
		{
			if(n1%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d",n1);
			prime=1;
		}
		n1++;
	}while(prime!=1);
	return 0;
}
