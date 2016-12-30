#include <stdio.h>
int main()
{
    int matrix[5][5],M,N,K,i,j;
    printf("enter values of M,N,K:");
    scanf("%d%d%d",&M,&N,&K);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i+j==K)
            {
                matrix[i][j]=1;
            }
            else
            {
                matrix[i][j]=0;
            }
        }
    }
    for(i=0;i<M;i++)
    {
        printf("\n");
        for(j=0;j<N;j++)
        {
            printf("%d",matrix[i][j]);
        }
    }
    return 0;
}
