#include<stdio.h>
int main()
{
    int i,j,k,n,p,q;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        for(p=1;p<=k;p++)
            printf("*");
        for(q=1;q<=n-k;q++)
            printf(" ");
        for(i=1;i<=n-k;i++)
            printf(" ");
        for(j=1;j<=k;j++)
            printf("*");
        printf("\n");
    }
}

