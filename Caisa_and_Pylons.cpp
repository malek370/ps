#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,e=0,t[100001];
    t[0]=0;
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        e+=t[i]-t[i+1];
        if(e<0)
        {
        d+=-e;
        e=0;
        }
    }
    cout<<d;
}
