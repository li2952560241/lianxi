#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int n0,jx=0,temp=0,j=0,ks=0;
    int c=sqrt(n);//���Ϊʲô��Ҫ����һ���������أ��ڿ����ź����ȷ���������ٵ����Ӿ�����Ϊ������
    //�������������������������������ֵ��˵��ڸ������ǿ����ţ����������ǽ�ʡ����ʱ�䣬��ֹ��ʱ
    for(int i=2;i<=c;i++)
    {
        temp=0;
        n0=n;
        for(j=i;n0%j==0&&n0!=0;j++)
        {
            temp++;
            n0/=j;
        }
        if(temp>jx)
        {
            jx=temp;
            ks=i;
        }
    }
    if(jx!=0)
    {
        cout<<jx<<'\n';
        for(int i=ks;i<ks+jx;i++)
        {
            cout<<i;
            if(i!=jx+ks-1)
                cout<<'*';
        }
    }
    else if(jx==0){
        cout<<"1\n"<<n;
    }
    return 0;
}