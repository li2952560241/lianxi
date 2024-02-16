#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, M;
    cin >> L >> M;

    // 初始化差分数组
    vector<int> diff(L + 1, 0);

    // 处理每个区域
    for (int i = 0; i < M; ++i) {
        int start, end;
        cin >> start >> end;
        diff[start]++;   // 在起始点增加
        diff[end + 1]--; // 在终止点之后减少
    }

    // 计算差分数组的前缀和
    for (int i = 1; i <= L; ++i) {
        diff[i] += diff[i - 1];
    }

    // 统计剩余的树的数量
    int remaining_trees = 0;
    for (int i = 0; i <= L; ++i) {
        if (diff[i] == 0) {
            remaining_trees++;
        }
    }

    // 输出结果
    cout << remaining_trees << endl;

    return 0;
}
