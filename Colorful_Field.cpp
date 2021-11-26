#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int > pp;
#define pb(x) x.push_back
int main()
{
    vector<ll > v;
    string ans[4]={"Grapes","Carrots","Kiwis"};
  int n,m,t,k;
  cin>>n>>m>>k>>t;
  while(k--)
  {
      int x,y;

      cin>>x>>y;
      x--;y--;
      ll s=x+y*m;
      pb(v)(s);
  }
  sort(v.begin(), v.end());
  while(t--)
  {
      ll s;
      int x,y;
      cin>>x>>y;
      x--;y--;
      int nb=0,b=0;
      ll i;
      for(i=0;i<v.size();i++)
      {
          if(v[i]==s){b=1;break;}

          if(v[i]>s)break;
          nb++;


      }
      if(b==1)cout<<"waste"<<endl;
      else cout<<ans[nb%3]<<endl;
  }

}

