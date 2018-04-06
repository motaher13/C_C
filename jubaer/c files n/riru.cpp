#include <stdio.h>
#include <queue>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
vector<int>vc[5000000];
int visited[5000000],level[5000000];
map<int,string>name;
int ara[5000000];
int count;
void bfs(int p){
    count=0;
int i,j,k,l,m,n,v,w;
   level[p]=0;
   visited[p]=1;
   name[p]="white";
 queue<int>q;
 q.push(p);
 while(!q.empty()){
    v=q.front();
    q.pop();
    for(i=0;i<vc[v].size();i++){
        w=vc[v][i];
        if(visited[w]==1){
            if(name[w]==name[v]){
                    count=-1;
            break;
            }
        }
        else if(visited[w]==0){
            visited[w]=1;
            if(name[v]=="white")name[w]="black";
            else name[w]="white";
            count=level[w]=level[v]+1;
            q.push(w);
        }
    }
  if(count==-1)break;
 }
}
int main()
{
    int i,j,k,l,m,n,ck,t,sum,r;
    scanf("%d",&r);
    while(r--){
    scanf("%d%d",&n,&m);
    for(i=0;i<=n;i++){
        visited[i]=0;
        name[i]="blue";
        ara[i]=i;
    }

    for(i=0;i<m;i++){
        scanf("%d%d",&k,&l);
        vc[k].push_back(l);
        vc[l].push_back(k);
    }
    ck=1;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(vc[i].size()<vc[j].size()){
                t=ara[i];
                ara[i]=ara[j];
                ara[j]=t;
            }
        }
    }
    sum=0;
    for(i=0;i<n;i++){
        if(visited[ara[i]]==0){
            bfs(ara[i]);
            if(count==-1){
                ck=0;
                break;
            }
           if(count==0||count==1)count=1;
           sum=sum+count;
        }
    }
    if(ck==0)printf("-1");
    if(ck==1)
 printf("%d",sum);
 printf("\n");
 name.clear();
   for(i=0;i<=n;i++)vc[i].clear();
    }
    return 0;
}
