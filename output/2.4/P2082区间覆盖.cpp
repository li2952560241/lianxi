#include <bits/stdc++.h>
using namespace std;

struct cd{
    long long  z,y;
    
}a[100005];
bool cmp(cd a,cd b){
    return a.z<b.z;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].z>>a[i].y;
    }
    sort(a,a+n,cmp);
    long long sum=0;
    long long zy=-1;
    for(int i=0;i<n;i++)
    {
        if(zy<=a[i].y)
        {
            sum+=a[i].y - max(zy,a[i].z)+1;
            zy=a[i].y+1;
        }
    }
    cout<<sum;
    return 0;
}