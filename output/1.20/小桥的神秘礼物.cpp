#include <bits/stdc++.h>
using namespace std;
queue <int> q;
int main()
{
    int n;
    cin>>n;
    int z,x;
    for (int i =0;i<n;i++)
    {
        cin>>z;
        switch (z)
        {
        case 1:
            cin>>x;
            q.push(x);
            break;
        case 2:
            if(q.size()==0)
                cout<<"lan\n";
            else
            {
                q.pop();
            }
            break;
        case 3:
            if(q.size()==0)
                cout<<"qiao\n";
            else
                cout<<q.front()<<"\n";
                break;
        case 4:
            cout<<q.size()<<"\n";
            break;
        }
    }
    
    return 0;
}