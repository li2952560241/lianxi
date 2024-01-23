#include <bits/stdc++.h>
using namespace std;
int n,m;
int sum=0;
void hnt(char a,char b,char c,int n)
{
    if(n==1)
    {
        sum++;
        if(sum==m){cout<<"#"<<n<<": "<<a<<"->"<<c<<'\n';}
    }
    else{
        hnt(a,c,b,n-1);
        sum++;
        if(sum==m){cout<<"#"<<n<<": "<<a<<"->"<<c<<'\n';}
        hnt(b,a,c,n-1);
    }
}
int main()
{
    cin>>n>>m;
    int a=1,b=2,c=3;
    hnt('A','B','C',n);
    cout<<sum;
    return 0;
}