#include<bits/stdc++.h>
using namespace std;
int fa[989898];
struct node{int x,y,t;}e[989898];
bool operator < (node a,node b){return a.t<b.t;}
int find(int x){if(x!=fa[x])fa[x]=find(fa[x]);return fa[x];}
int n,m,num,ans;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++)
        scanf("%d%d%d",&e[i].x,&e[i].y,&e[i].t);
    sort(e+1,e+1+m);
    for(int i=1;i<=m;i++)
    {
        int x=find(e[i].x),y=find(e[i].y);
        if(x==y)continue;fa[x]=y;num++;ans=max(ans,e[i].t);
    }
    if(num!=n-1)printf("-1\n");else printf("%d\n",ans);
    return 0;
}