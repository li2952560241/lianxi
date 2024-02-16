#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag=1e8;
    int sum=0;
    for(int i=0,j=0;i<n;)
    {
        if(sum<s){
            sum+=a[i];
            i++;
        }
        else{
            flag=min(i-j,flag);
            sum-=a[j];
            j++;
        }
    }
    if(flag==1e8)cout<<0;
    else
    cout<<flag;
    return 0;
}