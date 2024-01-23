/*#include <bits/stdc++.h>
using namespace std;

char a[101];
char b[101];
char c[103];
int main()
{
    cin.getline(a,101);
    cin.getline(b,101);
    int alen=strlen(a);
    int blen=strlen(b);
    int i=0;
    //cout<<alen<<blen;
    while(alen>0&&blen>0)
    {
        int s=(a[alen-1]-'0')+(b[blen-1]-'0');
        //cout<<s<<' ';
        if(s>=10)
        {
            c[i+1]++;
        }
        c[i++]+=s%10+'0';
        //cout<<s%10;
        //cout<<a[i-1];
        alen--;
        blen--;
    }
    cout<<i<<'\n';
    for(i=strlen(c);i>=0;i--)
    {
        cout<<c[i];
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
string add(string a,string b){
    string s;
    int c=0;
    for(int i=a.size()-1,j=b.size()-1;i>=0||j>=0||c>0;i--,j--){
        if(i>=0)  c+=a[i]-'0';//直接用需要使用的结果进行相加
        if(j>=0)  c+=b[j]-'0';
        
        s+=(c%10)+'0';
        c/=10;//留下进位的数
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}