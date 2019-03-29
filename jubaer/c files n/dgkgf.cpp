#include <stdio.h>
#include <queue>
using namespace std;
char str[1100][1100];
int time[1100][1100];
int level[1100][1100];
int visit[1100][1100];
int visit2[11000][11000];
int x[10]={1,-1,0,0};
int y[10]={0,0,1,-1};
int main()
{

    int i,j,k,l,m,n,r,s,t,v,w,p,u,ck;
    scanf("%d",&t);
     queue<int>q;
    while(t--){
    scanf("%d%d",&n,&m);
    getchar();
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
          str[i][j]=getchar();
            if(str[i][j]=='F'){
                level[i][j]=0;
                visit[i][j]=1;
                q.push(i);
                q.push(j);
            }
            else if(str[i][j]=='J'){
                p=i;
                u=j;
                visit2[p][u]=1;
            }
            else {
                    visit[i][j]=0;
                    visit2[i][j]=0;
            }
        }
        getchar();

    }
    while(!q.empty()){
        v=q.front();
        q.pop();
        w=q.front();
        q.pop();
      for(k=0;k<4;k++){
        r=v+x[k];
        s=w+y[k];
        if(r>=0&&r<n&&s>=0&&s<m&&visit[r][s]==0&&str[r][s]=='.'){
            visit[r][s]=1;
            str[r][s]='p';
            level[r][s]=level[v][w]+1;
            q.push(r);
            q.push(s);

        }
      }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         //   printf("%c",str[i][j]);
            if(str[i][j]=='p'){
              //  printf("%d %d %d\n",level[i][j],i,j);
            }
        }
        //printf("\n");
    }
    ck=0;
    q.push(p);
    q.push(u);
    if(p==0||p==n-1||u==0||u==m-1)printf("1\n");
    else{
    time[p][u]=0;
    while(!q.empty()){
        v=q.front();
        q.pop();
        w=q.front();
        q.pop();
        for(k=0;k<4;k++){
            r=v+x[k];
            s=w+y[k];
            if(r>=0&&r<n&&s>=0&&s<m&&visit2[r][s]==0&&str[r][s]=='p'){
                visit2[r][s]=1;
                time[r][s]=time[v][w]+1;
                if(time[r][s]<level[r][s]){
                    if(r==0||r==n-1||s==0||s==m-1){
                        ck=time[r][s];
                        break;
                    }
                    else {
                        q.push(r);
                        q.push(s);
                    }
                }
            }

        }
        if(ck!=0)break;

    }
    if(ck==0)printf("IMPOSSIBLE\n");
    else printf("%d\n",ck+1);
    }
    }
}
