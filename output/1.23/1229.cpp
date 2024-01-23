#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a[10005];
    int t=-1;
    while(n--)
    {
        string c,str;
        cin>>c;
        cin>>str;
        if(c[0]=='i')
        {
            a[++t]=str;
        }
        else
        {
            while(a[t]!=str&&t>=0)
            {
                t--;
            }
            t--;
        }
    }
    if(t<0)
    {
        cout<<"Empty";
    }
    else
    {
        cout<<a[t];
    }
    return 0;
}