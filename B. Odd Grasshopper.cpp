#include<bits/stdc++.h>
using namespace std ;
void solve()
{ long long t; long long a,b ;
cin >> t ;
while(t--)
{
cin >> a>> b ;
if (b%4==0)
{
    if (a%2==0 || a%2!=0)
        cout <<a<<endl ;
}
else
{
    if(b%4==1)
    {
        if (a%2==0)
            cout<<a-b<<endl;
        else
            cout<<a+b<<endl ;
    }
    else
    {
        if (b%4==2)
        {
            if (a%2==0 )
                cout<<a+1<<endl;
                else
                    cout<<a-1<<endl;
        }
            else
            {
              if (b%4==3)
              {
                  if (a%2==0)
                  {
                      cout<<a+b+1<<endl ;
                  }
                  else
                  cout<<a-b-1<<endl ;
              }
            }
    }
}
}
}




int main()
{
solve() ;
}
