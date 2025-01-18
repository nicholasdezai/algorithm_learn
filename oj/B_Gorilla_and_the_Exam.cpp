#include <stdio.h>
#include<stdlib.h>
int f(const void*a,const void*b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],i,b[100000]={0};
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        qsort(a,n,4,f);
        int z=1,j=0;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]==a[i])
            z++;
            else
            {
                b[j]=z;
                z=1;
                j++;
            }
            if(i==n-1)
            b[j]=z;
        }
        qsort(b,j+1,4,f);
        int ans=j+1;
        while(b[j+1-ans]<=k && ans>1)
        {
            k-=b[j+1-ans];
            ans--;
        }
        printf("%d\n",ans);
    }
    return 0;
}