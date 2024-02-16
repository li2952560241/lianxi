#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum=0,a=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a*=i;
        sum+=(a);
    }
    cout<<sum;
    return 0;
}