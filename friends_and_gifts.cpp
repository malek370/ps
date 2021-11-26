#include<bits/stdc++.h>
typedef long long int ll;

#define pb push_back
#define fi first
#define se second
#define all(x) auto itr=x.begin();itr!=x.end();itr++
using namespace std;
struct liste
{
    int x;
    liste *next;
};
typedef liste *li;


li supp(int a,li l)
{
    li q=l;
    if(l->x==a)
    {
        l=q->next;
        free(q);
    }
    else
    {
        while(q->next->x!=a)
        {
            q=q->next;
        }
        li p;
        p=q->next;
        q->next=p->next;
        free(p);
    }
return l;
}
li supp1(int i,li l,int *a)
{
    li q=l;
    if(l->x!=i)
    {
        *a=i;
        l=q->next;
        free(q);
    }
    else
    {
        while(q->next->x==i)
        {
            q=q->next;
        }
        *a=i;
        li p;
        p=q->next;
        q->next=p->next;
        free(p);
    }
return l;
}
int main()
{
    vector<int > v;
    ll n;
    cin>>n;
    li l=NULL;
    for(int i=0; i<n; i++)
    {
        li p;
        p=(liste*)malloc(sizeof(liste));
        p->x=i+1;
        p->next=l;
        l=p;
    }
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.pb(a);
        if(a!=0)
        {
            l=supp(a,l);
        }
    }
    int i=0;
    for(all(v))
    {
        i++;
        if(*itr==0)
        {
            int *a;
            l=supp1(i,l,a);
            *itr=*a;
        }
        cout<<*itr<<" ";
    }


}
