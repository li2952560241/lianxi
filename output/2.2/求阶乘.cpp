#include <iostream>
using namespace std;

long long query(long long n) {
    long long ret = 0;
    while (n > 0) {
        ret += n / 5;//���������һ��������5���ǽ���һ��++
        //cout<<n<<' ';
        n /= 5;
    }
    return ret;
}
int main() {//Ϊʲô�����ö��ֲ����أ�
//��Ϊ0�ĸ���ȡ����N����5��2�˻�����������2��������ԶԶ����5����������������5�ĸ�������
    long long k;
    cin >> k;
    long long l = 1, r = 1e19; // long long�ﵽ���
    while (l < r) {//�����￪ʼʹ�ö��ֲ���
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