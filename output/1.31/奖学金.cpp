#include <bits/stdc++.h>
using namespace std;

struct sutden{
    int id;
    int yw;
    int sx;
    int yy;
    int sum;
};
bool cmp(struct sutden a,struct sutden b)
{
    if(a.sum==b.sum)
    {
        if(a.yw==b.yw)
        {
            return a.id<b.id;
        }
        else{
            return a.yw>b.yw;
        }
    }
    else{
        return a.sum>b.sum;
    }
}
int main()
{
    int n;
    cin>>n;
    sutden a[n];
    for(int i=0;i<n;i++)
    {
        a[i].id=i+1;
        cin>>a[i].yw>>a[i].sx>>a[i].yy;
        a[i].sum=a[i].yw+a[i].sx+a[i].yy;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<5;i++)
    {
        cout<<a[i].id<<" "<<a[i].sum<<"\n";
    }
    return 0;
}