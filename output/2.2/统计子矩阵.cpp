#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s[520][520],ans=0;
int main()
{
/*/    ��άǰ׺��
  int n,m,k;cin>>n>>m>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      int t;cin>>t;
      s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+t;
    }
  }
  //������
  ll value=0;
  //��Ҫ��������м��������Ĵ�С����������һ����������
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
// �Ż�����ȡ����
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