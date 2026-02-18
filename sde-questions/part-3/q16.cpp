#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v1 = {1,2,2,3,2};
    vector<int> v = {11,33,33,11,33,11};
    int i,n;
    vector<int> m;
    n = v.size();
    map<int,int> mp;
    for(i=0;i<n;i++)
    mp[v[i]]++;

    for(auto it : mp)
    {
        if(it.second>(n/3))
        {
            m.push_back(it.first);
        }
    }
    for(auto it : m)
    cout<<it<<" ";
    return 0;
}