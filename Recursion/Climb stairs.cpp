#include<cstdio>//���� scanf��printf ��
#include<cstring>//���� memset ��
int n,ns=1;
int a[5010],b[5010],c[5010];
//����
//ע�������С
void Fibonacci()
//��ʼ
{
    a[1]=1,b[1]=2;//ע���ʼ��
    for(int i=3;i<=n;i++)//�ӵ�3��ѭ��
    {
        for(int j=1;j<=ns;j++)c[j]=a[j]+b[j];//���
        for(int j=1;j<=ns;j++)//��λ
        {
            if(c[j]>9)//����9�Ž�
            {
                c[j+1]+=c[j]/10;
                c[j]%=10;
                if(j+1>ns)ns++;//С��Ҫ����һλ
            }
        }
        for(int j=1;j<=ns;j++)a[j]=b[j];
        for(int j=1;j<=ns;j++)b[j]=c[j];
        //����
    }
}
int main()
{
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    //�� 0       �Ż�
    scanf("%d",&n);//����
    if(n<3)//С�� 3 Ҫ���С��----------����������
    {
        printf("%d",n);
        return 0;
    }
    Fibonacci();
    //�߾��͵��ƺϲ�
    for(int i=ns;i>0;i--)printf("%d",b[i]);
    //�������
    return 0;//�ټ�
}
