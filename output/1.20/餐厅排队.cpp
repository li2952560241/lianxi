#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int main()
{
    int n;
    int z=0,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>z;
        if(z==1)
        {
            cin>>x;
            q.push(x);
        }
        else if(z==3)
        {
            cout<<q.front()<<' '<<q.back()<<'\n';
        }
        else if(z==2)
        {
            q.pop();
        }
    }
    return 0;
}