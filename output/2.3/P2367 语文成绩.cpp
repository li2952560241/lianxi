#include <bits/stdc++.h>
using namespace std;
#define mun (int)1e6
int a[mun*5+5],b[mun*5+10];
int main()
{
    int n,p,x,y,z;
    cin>>n>>p;
    for(int i=0;i<n;i++)//输入初始分数
    {
        cin>>a[i];
    }
    for(int i=0;i<p;i++)//进行一个差分
    {
        cin>>x>>y>>z;
        b[x-1]+=z;
        b[y]-=z;
    }
    int min=100;
    for(int i=0;i<n;i++)//这里可以进行一个求和
    {
        if(i!=0)
            b[i]+=b[i-1];
        else
            b[i]=b[i];
    }
    for(int i=0;i<n;i++)
    {
        int s=a[i]+b[i];
        if(s<min)
        {
            min=s;
        }
    }
    cout<<min;
    return 0;
}