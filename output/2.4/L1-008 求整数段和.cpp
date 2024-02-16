#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    long long sum=0;
    int flag=0;
    for(int i=a;i<=b;i++)
    {
        if(i==a)
        {
            flag=0;
        }
        else
        {
            flag++;
        }
        if(flag==5)
        {
            cout<<'\n';
            flag =0;
        }
        printf("%5d",i);
        sum+=i;
    }
    cout<<"\nSum = "<<sum;
    return 0;
}