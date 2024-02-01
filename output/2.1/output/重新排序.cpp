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
  // ���ڴ��������Ĵ���
  int n, m;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
  }//�����ִ���������
  cin >> m;
  for(ll i = 0 ; i < m ; i++){
    ll l, r; 
    cin >> l >> r;
    b[l - 1]++;
    b[r]--;
  }//��¼��Ҫ�ӵ�����
  for(int i = 0 ; i < n ; i++){
    b[i] += b[i - 1];
  }//�ѼӵĴ�������ǰ׺�� �������
  ll temp = 0;
  for(ll i = 0 ; i < n ; i++){
    temp += b[i] * a[i];
  }
  sort(a, a + n, cmp);
  sort(b, b + n, cmp);//���ֵĴ���
  ll ans = 0;
  for(ll i = 0 ; i < n ; i++){
    ans += b[i] * a[i];
  }
  cout << ans - temp;
  return 0;
}