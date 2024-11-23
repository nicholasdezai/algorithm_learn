#include <cstdio>
#include <iostream>
using namespace std;
int n;
char ch[205];//�洢���ӵ�״̬
void swap(char &a, char &b)//��������
{
    char t = a;
    a = b;
    b = t;
}
void output(){//���
    for (int i = 0; i < 2 * n + 2; i++)
        putchar(ch[i]);
    putchar('\n');
}
void movechess(int start, int end)
{//�ƶ�����
    swap(ch[start], ch[end]);
    swap(ch[start + 1], ch[end + 1]);
    output();
}
string out[4] = {"ooo*o**--*", "o--*o**oo*", "o*o*o*--o*", "--o*o*o*o*"};
//���qwq
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        ch[i] = 'o';
    for (int i = n; i < 2 * n; i++)
        ch[i] = '*';
    ch[2 * n] = '-';
    ch[2 * n + 1] = '-';
    //��ӡ��ʼ״̬
    output();
    int len = n;
    //��Ҫ�ƶ��ĺ�/������
    while (true)
    {
        movechess(len - 1, 2 * len);
        //�м�� "o*" �� "--" ����
        len--;
        if (len == 3)
            //��������������,��ʼ����������
            break;
        movechess(len, 2 * len);
        //����ߵ� "**" �� "--" ����
    }
    string ss;
    for (int i = 0; i < n - 4; i++)
        ss += "o*";
    for (int i = 0; i < 4; i++)
        cout << out[i] << ss << endl;
}