#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, M;
    cin >> L >> M;

    // ��ʼ���������
    vector<int> diff(L + 1, 0);

    // ����ÿ������
    for (int i = 0; i < M; ++i) {
        int start, end;
        cin >> start >> end;
        diff[start]++;   // ����ʼ������
        diff[end + 1]--; // ����ֹ��֮�����
    }

    // �����������ǰ׺��
    for (int i = 1; i <= L; ++i) {
        diff[i] += diff[i - 1];
    }

    // ͳ��ʣ�����������
    int remaining_trees = 0;
    for (int i = 0; i <= L; ++i) {
        if (diff[i] == 0) {
            remaining_trees++;
        }
    }

    // ������
    cout << remaining_trees << endl;

    return 0;
}
