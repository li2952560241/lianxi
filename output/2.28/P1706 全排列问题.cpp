#include<bits/stdc++.h>
using namespace std;
int n;
int flag[10];//用于标记是否存在排列数组中
int vid[10];//用于存放最开始序列
int a[10];//用于存放排列数组
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
            a[x]=vid[i];//放入
            flag[i]=1;//标记
            paix(x+1);//找些一个排序数字
            flag[i]=0;//恢复标记
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