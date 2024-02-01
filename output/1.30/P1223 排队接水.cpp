#include <bits/stdc++.h>
using namespace std;

struct a{
    int id;
    int s;
};
bool cmp(struct a b,struct a c)
{
    return (b.s<c.s);
};
a mub[1005];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>mub[i].s;
        mub[i].id=i;
    }
    sort(mub+1,mub+n+1,cmp);
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        cout<<mub[i].id<<" ";
        sum+=mub[i].s*(n-i);
    }
    cout<<'\n';
    printf("%.2lf\n",sum*1.0/n);
    return 0;
}