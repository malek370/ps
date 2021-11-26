#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    vector<char> t;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if (s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7') t.pb(s[i]);
        if (s[i]=='4') {t.pb('3');t.pb('2');t.pb('2');}
        if(s[i]=='6'){t.pb('3');t.pb('5');}
        if (s[i]=='8'){t.pb('2');t.pb('2');t.pb('2');t.pb('7');}
        if(s[i]=='9'){t.pb('3');t.pb('3');t.pb('3');t.pb('7');}
    }
    sort(t.begin(),t.end(),greater<char>());
    for(auto i=0;i<t.size();i++)
    {
        cout<<t[i];
    }

}
