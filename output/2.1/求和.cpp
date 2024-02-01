#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n]={0};
    long long b[n]={0};
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a[i]=x;
        b[i]=a[i];
    }
    for(int i=n-1;i>0;i--)
    {
        b[i-1]+=b[i];
    }
    long long sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=(a[i]*b[i+1]);
    }
    cout<<sum;
    return 0;
}