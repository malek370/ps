#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,t[101],d=0;
    cin>>n>>a;
    a=a-1;
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    if(t[a]==1)d++;
    int x=a-1,y=a+1;
    while((x>=0)||(y<n))
    {
        if(x<0){if(t[y]==1)
            {
                d++;
            }
         }
         else
         {
             if(y>=n){if(t[x]==1) d++;}
             else
             {
                 if(t[x]==1&&t[y]==1)d+=2;
             }
         }
         x--;
         y++;
    }
    cout<<d;
}
