#include <stdio.h>
#include<string.h>
int check_vowels_space(int a)
{	
	int k=1;
	switch(a)
    	{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			case ' ':
					k=0;
					break;
	}
	return k;
}
int check_symbols(int a)
{
	int d,f=1;
	d=(int)a;
	if(((d<=64)&&(d>=57))||((d>=33)&&(d<=47)))
	{
		f=0;
	}
	return f;
}
int main() 
{
	char input[50],output[50];
	int c,d,n,j=0;
	printf("enter the string:");
	gets(input);
	n=strlen(input);
	for(int i=0;i<n;i++)
	{
		c=check_vowels_space(input[i]);
		d=check_symbols(input[i]);
		if(c&&d)
		{
			output[j]=input[i];
			j++;
		}
	}
	output[j]='\0';
	puts(output);
	return 0;
}
