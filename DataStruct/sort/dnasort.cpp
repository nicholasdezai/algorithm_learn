#include<stdio.h>
#include<stdlib.h>
struct DNA
{
    char a[100];
    int sum;
    int num;
}f[200];
int main()
{
    int n,m,count;
    int t;
    scanf("%d %d",&n,&m);

    for(int i=0;i<m;i++)
    {
        scanf("%s",&f[i].a);
        count=0;
        for(int j=0;j<n-1;j++)
        {
            for(int k=j;k<n;k++){

                if(f[i].a[j]>f[i].a[k]){
                    count++;    //计算无序对有几个
                }
            }

        }

        f[i].sum=count;  //sum记录每个字符串各自的无序对
        f[i].num=i;      //记录无序对对应的字符串的下标
    }
    for(int i=0;i<m-1;i++)    //将无序对数从大到小排序
    {
        for(int j=i;j<m;j++)
        {
            if(f[i].sum<=f[j+1].sum)
            {
                t=f[j+1].sum;
                f[j+1].sum=f[i].sum;
                f[i].sum=t;      //无序对排序
                t=f[j+1].num;
                f[j+1].num=f[i].num;
                f[i].num=t;      //无序对被交换了，对应的代表字符串的下标也要被交换
            }
        }
    }
    for(int i=m-1;i>=0;i--){  //逆序输出，就是输出有序对数从大到小输出，因为跟无序对数相反
        puts(f[f[i].num].a);  //里面的下标是num记录的对应字符串的下标，字符串原本的位置是没有改变的
    }


    return 0;
}