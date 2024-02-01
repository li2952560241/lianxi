#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    int a0=a,b0=b;
    int sa=0,sb=0;
    while(a0)
    {
        sa+=a0%10;
        a0/=10;
    }
    while(b0)
    {
        sb+=b0%10;
        b0/=10;
    }
    if(sa!=sb)
    {
        return sa<sb;
    }
    else{
        return a<b;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector <int> t(n);
    for(int i=0;i<n;i++)
    {
        t[i]=i+1;
    }
    sort(t.begin(),t.end(),cmp);
    cout<<t[k-1];
    return 0;
}