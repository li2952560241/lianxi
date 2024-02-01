#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long  a[N],sum[N];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++){//求前n项和
        sum[i]=a[i]+sum[i-1];
    }
    long long  ans=1e18;//设置为题目最大数
    for(int p=0;p<=k;p++){
        ans=min(sum[2*p]+sum[n]-sum[n-(k-p)],ans);//求出较小的数字
    }
    cout<<ans<<endl;
    return 0;
}