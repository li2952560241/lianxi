
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;//达到题目的一个上限
int n, k;
int h[N], w[N];  //全局变量的一个优点就是不用自己初始化
bool Check(int d) {
    int num = 0;
    for (int i = 0; i < n; i++)  num += (h[i] / d) * (w[i] / d);
    if (k <= num)  return true;
    return false;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) 
        cin >> h[i] >> w[i];//记录蛋糕的大小
    int d = 1;
    int l=1,r=N;
    while(l<r){//二分法
      int mid=(l+r)/2;
      if(Check(mid))  l=mid+1;
      else            r=mid;
   }
    cout << l-1 << endl;

    return 0;
}