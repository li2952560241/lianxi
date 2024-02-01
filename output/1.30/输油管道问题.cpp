#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x>>v[i];
    }
    sort(v.begin(),v.end());
    int t=v[n/2];
    int sum=0;
    for (int i=0;i<v.size();i++) {
		sum += abs( v[i]- t);
	}
    cout<<sum;
    return 0;
}