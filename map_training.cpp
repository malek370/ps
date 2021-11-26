/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> mp;
    mp={
     {'a',7},{'c',2}
    };
    char k='b';
    mp[k]=8;
    //mp.clear();
    cout<<mp.empty()<<endl;
    pair <char,int> p1('f',32);
    mp.insert(p1);
    mp.insert(pair<char ,int> ('d',0));
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<itr->second<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test="hello world my name is tim! ttthhaaa";
    map<char,int> mp;
    for(int i=0;i<test.size();i++)
    {
        if(test[i]!=' '&&test[i]!='!'){mp[test[i]]++;}
    }
    for(auto itr=mp.begin();itr!=mp.end();++itr)
    {
        cout<<itr->first<<"  nombre de fois: "<<itr->second<<endl;
    }
}

