#include<stdio.h>
int main()
{
    int number,rem,n=0,sum=0;
    printf("enter the number:");
    scanf("%d",&number);
    number=number<0?number*(-1):number;
    while(number>0)
    {
        rem=number%10;
        sum=sum+rem;
        number=number/10;
        n++;
    }
    printf("sum is:%d and no. of digits is:%d",sum,n);
 }
