#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,nb, t[10]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        t[k]++;
    }
    nb=t[4];
    int q;
    nb+=t[2]/2;
    t[2]=t[2]%2;
    q=min(t[1],t[3]);
    nb+=q;
    t[1]-=q;
    t[3]-=q;
    if(t[1]==0)
    {nb+=t[2];nb+=t[3];}
    else
    {
        if(t[2]==0)
        {
            nb+=t[1]/4;
            if(t[1]%4!=0)nb++;
        }
        else
        {
            nb++;
            t[1]-=2;
            if(t[1]>0)
            {nb+=t[1]/4;
            if(t[1]%4!=0)nb++;}
        }
    }
    cout<<nb;

}
