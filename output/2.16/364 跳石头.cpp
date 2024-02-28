#include <bits/stdc++.h>
using namespace std;
int k,n,m;
int a[50005];
bool check(int d)
{
    int num =0,pos=0;//num 移走的石头数目，pos 前一个石头
    for(int i=0;i<n;i++)
    {
        if(a[i]-pos<d) num++;
        else 
            pos=a[i];   //把基准改一下
    }
    if(num<=m) return true;
    else{
        return false;
    }
}
int main()
{
    cin>>k>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l,r=k,mid;
    while(l<r)
    {
        mid = (l+r)/2;
        if(check(mid)){
            l=mid+1;
        } 
        else{
            r=mid-1;
        }
    }
    cout<<l;
    return 0;
}