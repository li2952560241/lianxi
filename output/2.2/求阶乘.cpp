#include <iostream>
using namespace std;

long long query(long long n) {
    long long ret = 0;
    while (n > 0) {
        ret += n / 5;//这里进行了一个有因子5就是进行一个++
        //cout<<n<<' ';
        n /= 5;
    }
    return ret;
}
int main() {//为什么可以用二分查找呢，
//因为0的个数取决于N！中5和2乘积的因子数而2的因子数远远大于5的因字数。所以找5的个数即可
    long long k;
    cin >> k;
    long long l = 1, r = 1e19; // long long达到最大
    while (l < r) {//在这里开始使用二分查找
        long long mid = l + (r - l >> 1);
        if (query(mid) < k) l = mid + 1;
        else r = mid;
    }
   // cout<<2/5<<'\n';
    long long ret = query(l);
    if (ret == k) cout << l;
    else cout << -1;
    return 0;
}