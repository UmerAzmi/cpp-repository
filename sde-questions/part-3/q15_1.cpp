#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v1 = {3,2,3};
    vector<int> v2 = {4,4,2,4,3,4,4,3,2,4};
    vector<int> v = {2,2,1,1,1,2,2};
    int i,n,m;
    n = v.size();
    map<int,int> mp;
    for(i=0;i<n;i++)
    mp[v[i]]++;

    for(auto it : mp)
    {
        if(it.second>(n/2))
        {
            m = it.first;
        }
    }
    cout<<m;
    return 0;
}