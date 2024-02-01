#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ll;
const int N = 1e5+10;
ll b[N];
ll a[N];

int cmp(const ll a, const ll b){
  return a > b;
}
int main()
{
  // 请在此输入您的代码
  int n, m;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
  }//将数字存入数组中
  cin >> m;
  for(ll i = 0 ; i < m ; i++){
    ll l, r; 
    cin >> l >> r;
    b[l - 1]++;
    b[r]--;
  }//记录需要加的区间
  for(int i = 0 ; i < n ; i++){
    b[i] += b[i - 1];
  }//把加的次数进行前缀和 进行求和
  ll temp = 0;
  for(ll i = 0 ; i < n ; i++){
    temp += b[i] * a[i];
  }
  sort(a, a + n, cmp);
  sort(b, b + n, cmp);//出现的次数
  ll ans = 0;
  for(ll i = 0 ; i < n ; i++){
    ans += b[i] * a[i];
  }
  cout << ans - temp;
  return 0;
}