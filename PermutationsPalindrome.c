#include <stdio.h>
#include<string.h>
int main() 
{
// your code goes here
	char name[10];
	int n,flag=0,c=0;
	printf("enter value of string:");
	scanf("%s",name);
	n=strlen(name);
	for(int i=0;i<=n/2;i++)
	{	
		for(int j=i+1;j<n;j++)
		{
			if(name[i]==name[j])
			{
				name[i]=name[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(name[i]!=0)
		{
			flag=1;
			c++;
		}
	}
	if(flag==0)
	{
	printf("yes");
	}
	else
	{
		if(c>1)
		{
			printf("no");
		}
		else
		{
			printf("yes");
		}
	}
	return 0;
}
