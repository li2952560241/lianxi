#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s[520][520],ans=0;
int main()
{
/*/    二维前缀和
  int n,m,k;cin>>n>>m>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      int t;cin>>t;
      s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+t;
    }
  }
  //暴力法
  ll value=0;
  //需要两个点进行计算点区间的大小，故这里用一个暴力法求
  for(int a=1;a<=n;a++){
    for(int b=a;b<=n;b++){
      for(int c=1;c<=m;c++){
        for(int d=c;d<=m;d++){
          value=s[b][d]-s[a-1][d]-s[b][c-1]+s[a-1][c-1];
          if(value<=k) ans++;
        }
      }
    }
  }
  cout<<ans;
*/
// 优化（尺取法）
  int n,m,k;cin>>n>>m>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      int t;cin>>t;
      s[i][j]=s[i-1][j]+t;
    }
  }
  for(int a=1;a<=n;a++){
    for(int b=a;b<=n;b++){
      for(int c=1,d=1,value=0;d<=m;d++){
        value=value+s[b][d]-s[a-1][d];
        while(value>k){
          value=value-(s[b][c]-s[a-1][c]);
          c++;
        }
        ans=ans+(d-c+1);
      }
    }
  }
  cout<<ans;
  return 0;
}