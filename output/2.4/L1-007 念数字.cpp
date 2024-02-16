#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char str[1005];
    cin>>str;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='-'&&i!=strlen(str)-1)
        {
            cout<<"fu ";
        }
        else if(i==strlen(str)-1)
        {
            cout<<a[str[i]-48];
        }
        else{
            cout<<a[str[i]-48]<<' ';
        }
    }
    return 0;
}