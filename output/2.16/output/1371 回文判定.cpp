#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int flag=1; 
    for(int i=0,j=str.size()-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
    }
    if(flag)
    cout<<"Y";
    else{
        cout<<"N";
    }
    return 0;
}