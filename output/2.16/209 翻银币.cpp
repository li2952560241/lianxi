#include<bits/stdc++.h>
using namespace std;

void swap(char x[1005],int i){//½øÐÐ½»»»
    if(x[i]=='*'){
        x[i] = 'o';
    }else
        x[i] = '*';
}
int main()
{
    char s[1000];
    char x[1005];
    cin>>s;
    cin>>x;
    int count = 0;
    int len = strlen(x);
    for(int i=0;i<len;i++){
        if(s[i]!=x[i]){
            swap(x,i); 
            swap(x,i+1); 
            count ++ ;
        }
    }
    cout<<count<<endl;
    return 0;
}