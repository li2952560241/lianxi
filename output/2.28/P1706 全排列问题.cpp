#include<bits/stdc++.h>
using namespace std;
int n;
int flag[10];//���ڱ���Ƿ��������������
int vid[10];//���ڴ���ʼ����
int a[10];//���ڴ����������
void paix(int x)
{
    if(x==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%5d",a[i]);
        }
        cout<<'\n';
    }
    for(int i=1;i<=n;i++)
    {
        if(flag[i]==0)
        {
            a[x]=vid[i];//����
            flag[i]=1;//���
            paix(x+1);//��Щһ����������
            flag[i]=0;//�ָ����
        }
    }
    return ;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        vid[i]=i;
    paix(1);
    return 0;
}