#include<bits/stdc++.h>
using namespace std;
int n;
int vis[10];    // ���ʱ��
int a[10];      //��Ҫ��ȫ���е�����
int b[10];      //��ǰDFS�õ���ȫ����
void dfs(int step) {
    if (step == n+1) {     //�Ѿ���n��������ȫ���У����ȫ����
        for (int i=1; i<=n; i++)
            printf("%5d",b[i]);
        printf("\n");
        return;            //���������ټ���DFS
    }
    for (int i = 1; i <= n; i++) {    //����ÿ��a[i]���Ž�ȫ������
        if (vis[i] == 0) {   // ����a[i]����ǰ��õ���������
            b[step] = a[i];  // ��a[i]�Ž�����
            vis[i] = 1;      // �����ֳ���a[i]�����ں��������
            dfs(step+1);     // �����Ѻ�������Ž�����
            vis[i] = 0;      // �ָ��ֳ���a[i]���¿���ʹ��
        }
    }
    return;
}
int main() {
    cin >> n;
    for (int i=1; i<=n; i++)  a[i]=i;   //��ֵ�õ�n����
    dfs(1);  //��a[1]~a[n]��ȫ����
    return 0;
}
