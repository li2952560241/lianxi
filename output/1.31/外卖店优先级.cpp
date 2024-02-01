#include <bits/stdc++.h>
using namespace std;

const int N = 100010;

int order[N];//order[id] ��id����������һ�ζ���
int prior[N];//prior[id] ��id������������ȼ�
int flag[N];//flag[id] ��id���������Ƿ������Ȼ����� 

struct node
{
    int time,
    id;
}a[N];
bool cmp(node a,node b){
    if(a.id == b.id)
        return a.time < b.time;
    return a.id < b.id;
}

int main(){
    int m,n,T;
    cin >> n >> m >> T;
    for(int i=0; i<m; ++i)
        cin >> a[i].time >> a[i].id;
    
    sort(a,a+m,cmp);
    for(int i=0; i<m; ++i)
    {
        int tt = a[i].time;
        int id = a[i].id;
        if(tt != order[id])
            prior[id] -= tt-order[id]-1;
        
        prior[id] = prior[id] <0 ? 0 : prior[id];
        
        if(prior[id] <= 3)
            flag[id]=0;
        prior[id]+=2;
        if(prior[id] > 5)
            flag[id]=1;
        order[id] = tt;
    }
    
    for(int i=1; i<=n; ++i)
    {
        if(order[i] < T){
            prior[i] -= T-order[i];
            if(prior[i]<=3)
                flag[i]=0;
        }
    }
    
    int ans=0;
    for(int i=0;i<=n; ++i)
        if(flag[i])
            ans++;
            
    cout << ans;
    
    return 0;
}