#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d=0,a=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='D')d++;
        else a++;
    }
    if(d==a)cout<<"Friendship";
    if(d>a)cout<<"Danik";
    if(d<a)cout<<"Anton";
}
