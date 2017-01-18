#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
void display(int matrix[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n-------------\n|");
		for(j=0;j<4;j++)
		{
			if(matrix[i][j]==32)
			{
				printf("%c |",matrix[i][j]);
			}
			else if(matrix[i][j]>9)
			{
				printf("%d|",matrix[i][j]);
			}
			else
			{
				printf("0%d|",matrix[i][j]);
			}
		}
	}
	printf("\n-------------\n");
}
int main()
{
	int matrix[4][4]={2,1,4,3,6,5,32,7,9,8,11,10,13,12,15,14};
	char choice;
	int tempi,tempj;
	int i=1,j=2;
	clrscr();
	while(1)
	{
		display(matrix);
		printf("\npress u-->up d-->down l-->left r-->right q-->quit\nenter a character\n");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'l':
				tempi=i;
				if(j==0)
				{
					tempj=j+4-1;
				}
				else
				{
					tempj=j-1;
				}
				break;
			case 'r':
				tempi=i;
				tempj=(j+1)%4;
				break;
			case 'u':
				if(i==0)
				{
					tempi=i+4-1;
				}
				else
				{
					tempi=i-1;
				}
				tempj=j;
				break;
			case 'd':
				tempi=(i+1)%4;
				tempj=j;
				break;
			case 'q':
				exit(0);
		}
		matrix[i][j]=matrix[tempi][tempj];
		matrix[tempi][tempj]=32;
		i=tempi;
		j=tempj;
		clrscr();
	}
	return 0;
}
