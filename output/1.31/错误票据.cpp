#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> v(10005);
    cin>>n;
    int min=100005,max=0;
    for(int i=0;i<n;i++)
    {
        int x;
        while(cin>>x)
        {
            if(x<min) min=x;
            if(x>max) max=x;
            v[x]+=1;
            if(cin.get()=='\n') break;
        }
    }
    for(int i=min;i<=max;i++)
    {
        if(v[i]==0)
        cout<<i<<' ';
    }
    for(int i=min;i<=max;i++)
    {
        if(v[i]==2)
        cout<<i<<' ';
    }
    return 0;
}