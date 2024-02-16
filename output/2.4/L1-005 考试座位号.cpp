
#include <bits/stdc++.h>
using namespace std;

struct ks{
    string id;
    int s;
    int k;
}a[1005];
bool cmp(ks b,ks c)
{
    return b.s<c.s;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].id>>a[i].s>>a[i].k;
    }
    sort(a+1,a+1+n,cmp);
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        cout<<a[x].id<<' '<<a[x].k<<'\n';
    }
    return 0;
}