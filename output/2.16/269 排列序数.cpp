#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,str;
    cin>>str;
    s=str;
    sort(s.begin(),s.end());
    int sum=0;
    do{
        sum++;
        if(str==s)
        {
            cout<<sum-1;
        }
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}