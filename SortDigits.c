#include <stdio.h>
int main()
{
    int num,array[10],temp,j,i=0,length=0,d=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
	    array[i]=num%10;
	    i++;
	    length++;
	    num=num/10;
	}
	for(i=0;i<length;i++)
    {
	    for(j=i+1;j<length;j++)
	        {
                if(array[i]>array[j])
	            {
                    temp=array[i];
	                array[i]=array[j];
	                array[j]=temp;
	            }
	        }
	}
	for(i=0;i<length;i++)
    {
	    d=(d*10)+array[i];
	}
	printf("%d",d);
	return 0;
}
