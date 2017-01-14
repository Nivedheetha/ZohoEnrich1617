#include <stdio.h>
int main(void) 
{
	// your code goes here
	int num,original,rev,rem,next,palin=0;
	printf("enter the number:");
	scanf("%d",&num);
	next=num+1;
	original=next;
	do
	{
		rev=0;
	    	next=original;
	    	while(next>0)
	    	{
            		rem=next%10;
            		rev=rev*10+rem;
            		next=next/10;
	    	}
	    	if(original==rev)
	    	{
            		palin=1;
            		printf("%d",original);
	    	}
	    	original++;
	}while(palin!=1);
	return 0;
}
