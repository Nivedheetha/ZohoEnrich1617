#include<stdio.h>
void main()
{
    int number,rem,reverse=0;
    printf("enter the number to reverse:");
    scanf("%d",&number);
    while(number>0)
    {
        rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;
    }
    printf("%d",reverse);
 } 


