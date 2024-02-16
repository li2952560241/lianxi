#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int n0,jx=0,temp=0,j=0,ks=0;
    int c=sqrt(n);//这个为什么需要进行一个开根号呢，在开根号后可以确保我们最少的因子就两个为素数，
    //假设这个不是素数，极限求最大的两个值相乘等于该数就是开根号，所以这里是节省运行时间，防止超时
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