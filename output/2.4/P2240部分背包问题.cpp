#include <bits/stdc++.h>
using namespace std;
struct tx{
    double  bw;
    double  jz;
    double ave;
};
bool cmp(tx a,tx b)
{
    return a.ave>b.ave;
}
int main()
{
    int n,t;
    cin>>n>>t;
    double sum=0.0;
    struct tx a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].bw>>a[i].jz;
        a[i].ave = a[i].jz/a[i].bw ;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
       if(t>a[i].bw)
       {
            sum+=a[i].jz;
            t-=a[i].bw;
       }else{
            sum+=t*a[i].ave;
            break;
       }
    }
    printf("%.2lf",sum);
    return 0;
}