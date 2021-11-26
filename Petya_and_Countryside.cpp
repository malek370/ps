#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=0,n,t[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=i-1;j>=0;j--)
        {
            if(t[j]<=t[j+1]){x++;}
            else break;
        }
        for(int j=i+1;j<n;j++)
        {
            if(t[j]<=t[j-1])x++;
            else break;
        }
        if(x>m)m=x;
    }
    cout<<m+1;
}
