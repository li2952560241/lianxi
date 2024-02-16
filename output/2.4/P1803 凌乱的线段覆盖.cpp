#include <bits/stdc++.h>
using namespace std;
struct time
{
    int z,y;
}a[1000005];

bool cmp(struct time a,struct time b){
    return a.y<b.y;
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
    int sum=0;
    int xzy=-1;
    for(int i=0;i<n;i++)
    {
        if(xzy<=a[i].z)
        {
            xzy=a[i].y;
            sum++;

        }
    }
    cout<<sum;
    return 0;
}