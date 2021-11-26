#include<bits/stdc++.h>
using namespace std;
typedef pair<long long int,long long int> pp;
long long int dist1(pp x,pp y)
{
    return labs(x.first-y.first)+labs(x.second-y.second);
}
long long int dist2(pp x,pp y)
{
    return sqrtl((x.first-y.first)*(x.first-y.first)+(x.second-y.second)*labs(x.first-y.first));
}
int main()
{
    pp t[1000];
    int n;
    long long int m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t[i].first;
        cin>>t[i].second;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(dist1(t[i],t[j])==dist2(t[i],t[j]))m++;
        }
        m--;
    }
    cout<<m;
}
