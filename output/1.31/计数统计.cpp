#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int key=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
        key=v[i];
        sum++;
        while(key==v[++i])
        {
            sum++;
        }
        cout<<sum<<"\n";
        i--;
        sum=0;
    }
    return 0;
}