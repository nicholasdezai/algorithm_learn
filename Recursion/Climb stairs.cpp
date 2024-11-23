#include<cstdio>//调用 scanf和printf 库
#include<cstring>//调用 memset 库
int n,ns=1;
int a[5010],b[5010],c[5010];
//定义
//注意数组大小
void Fibonacci()
//开始
{
    a[1]=1,b[1]=2;//注意初始化
    for(int i=3;i<=n;i++)//从第3个循环
    {
        for(int j=1;j<=ns;j++)c[j]=a[j]+b[j];//相加
        for(int j=1;j<=ns;j++)//进位
        {
            if(c[j]>9)//大于9才进
            {
                c[j+1]+=c[j]/10;
                c[j]%=10;
                if(j+1>ns)ns++;//小心要多留一位
            }
        }
        for(int j=1;j<=ns;j++)a[j]=b[j];
        for(int j=1;j<=ns;j++)b[j]=c[j];
        //交换
    }
}
int main()
{
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    //清 0       优化
    scanf("%d",&n);//输入
    if(n<3)//小于 3 要多加小心----------卡了我两次
    {
        printf("%d",n);
        return 0;
    }
    Fibonacci();
    //高精和递推合并
    for(int i=ns;i>0;i--)printf("%d",b[i]);
    //逆序输出
    return 0;//再见
}
