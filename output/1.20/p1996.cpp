#include<bits/stdc++.h>
using namespace std;

queue<int> q;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    int k=1;
    while(!q.empty())
    {
        if(k==m)
        {
            cout<<q.front()<<' ';
            q.pop();
            k=1;
        }
        else 
        {
            k++;
            q.push(q.front());
            q.pop();
        }
    }
    return 0;
}