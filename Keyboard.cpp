#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define fi first
#define se second
#define all(x) auto itr=x.begin();itr!=x.end();itr++
using namespace std;
pair<int, int > pos(char a,int n,int m, string *t)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(t[i][j]==a)return make_pair(i,j);
        }
    }
    return make_pair(-1,-1);
}
int main()
{

    vector <pair<int,int>> v;
    int n,m,x;
    string t[50],s;
    ll q,nb=0;
    cin>>n>>m>>x;
    for(int i=0; i<n; i++)
    {
        cin>>t[i];
        for(int j=0; j<m; j++)
        {
            if(t[i][j]=='S')v.pb(make_pair(i,j));
        }
    }
    cin>>q>>s;
    for(ll i=0; i<q; i++)
    {


        pair <int, int > p;
        p=pos(tolower(s[i]),n,m,t);
        if(p.fi==-1)
        {
            nb=-1;
            break;
        }
        else
        {
            if(isupper(s[i]))
            {
                if(v.empty())
                {
                    nb=-1;
                    break;
                }
                else
                {

                    int d=abs(v[0].fi-p.fi)+abs(v[0].se-p.se);
                    for(all(v))
                    {
                        if (d>abs(itr->fi-p.fi)+abs(itr->se-p.se))d=abs(itr->fi-p.fi)+abs(itr->se-p.se);
                    }
                    if (d>x){nb++;}


                }
            }
        }


    }
    cout<<nb;

}
