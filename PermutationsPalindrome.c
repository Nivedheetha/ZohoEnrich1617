#include <stdio.h>
#include<string.h>
int main() 
{
	char name[10],copy[10];
	int n,flag=0,c=0;
	printf("enter value of string:");
	scanf("%s",name);
	//creating a copy of the input string
	strcpy(copy,name);
	n=strlen(copy);
	for(int i=0;i<n-1;i++)
	{	
		for(int j=i+1;j<n;j++)
		{	
			//checking for even no. of same letters
			if(copy[i]==copy[j])
			{
				copy[i]=copy[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(copy[i]!=0)
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
			//only one odd letter is allowed
			printf("yes");
		}
	}
	return 0;
}
