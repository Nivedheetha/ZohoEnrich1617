#include <stdio.h>
#include <string.h>
int main()
{
    char word[20];
    int n,flag=0;
    printf("enter the word");
    scanf("%s",word);
    n=strlen(word);
    for(int i=0;i<n/2;i++)
    {
        if(word[i]!=word[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("not a palindrome");
    }
    else
    {
        printf("palindrome");
    }
    return 0;
}
