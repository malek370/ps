#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string , int> mp;
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        while(m--)
        {
            string s;
            int t;
            cin>>s>>t;
            mp[s]+=t;
        }
    }
    cout<<mp.size()<<endl;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
        cout<<itr->first<<" "<<itr->second<<endl;
}
