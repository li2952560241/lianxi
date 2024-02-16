#include <bits/stdc++.h>
using namespace std;
struct sx  
{
    string name;
    int id;
    int y,m,d;
};
bool cmp(sx a,sx b)
{
    if(a.y==b.y)
    {
        if(a.m==b.m)
        {
            if(a.d==b.d)
            {
                return a.id>b.id;
            }
            else{
                return a.d<b.d;
            }
        }
        else{
            return a.m<b.m;
        }
    }
    else{
        return a.y<b.y;
    }
}
int main()
{
    int n;
    cin>>n;
    struct sx a[105];
    for(int i=0;i<n;i++)
    {
        a[i].id=i;
        cin>>a[i].name>>a[i].y>>a[i].m>>a[i].d;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<'\n';
    }
    return 0;
}