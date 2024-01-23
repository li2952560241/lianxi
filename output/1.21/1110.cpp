#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    int next;
}l[11];
int main()
{
    int m,x=0;
    cin>>m;
    for(int i=0;i<=10;i++)
    {
        l[i].data=i;
        l[i].next=((i+1));
    }
    l[10].next=0;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        l[x-1].next=l[x].next;
        l[x].next=l[0].next;
        l[0].next=x;
        printf("-1 data=%d next=%d\n",l[x-1].data,l[x-1].next);
        printf("data=%d next=%d\n",l[x].data,l[x].next);
        printf("+1 data=%d next=%d\n",l[x+1].data,l[x+1].next);
    }
   for(int i=0;i<=10;i++)
    {
        printf("data=%d next=%d\n",l[i].data,l[i].next);
    }
    return 0;
}