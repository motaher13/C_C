#include<bits/stdc++.h>
using namespace std;
int coin[60],ti[60],dp[60][1010]={-1},md=100000007;
int n,k;
int call(int i,int m);
int main()
{
    int i,j,l,t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%d",&coin[i]);
        for(i=0;i<n;i++)
            scanf("%d",&ti[i]);
        memset(dp,-1,sizeof (dp));
        j=call(0,0)%md;
        printf("Case %d: %d\n",cs,j);
    }
    return 0;
}
int call(int i,int m)
{
    //printf("%d %d\n",i,m);
    if(i>=n)
    {
        if(m==k) {
            return 1;}
        else return 0;
    }
    //if(m==k) return 1;
    if(m>k) return 0;
    if(dp[i][m]!=-1) return dp[i][m];
    int r=0;
    for(int j=0;j<=ti[i];j++)
    {
        if(m+coin[i]*j<=k)
            r+=call(i+1,m+coin[i]*j)%md;
        else
            break;
    }
    //r+=call(i+1,m)%md;
    dp[i][m]=r%md;
    return dp[i][m];

}

