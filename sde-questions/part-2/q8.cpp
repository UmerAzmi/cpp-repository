#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<pair<int,int>> v1 = {{1,3},{2,6},{8,10},{15,18}};
    vector<pair<int,int>> v = {{1,7},{4,5}};
    int i,m;
    m=v.size();
    for(i=0;i<m-1;i++)
    {
        if(v[i].second>=v[i+1].first)
        {
            v[i+1].first=v[i].first;
            if(v[i+1].second<v[i].second)
            {
                v[i+1].second=v[i].second;
            }
            // v.erase(v.begin()+i);
            v[i].first=-1;
            v[i].second=-1;

        }
    }
    pair<int,int> p = {-1,-1};
    v.erase(remove(v.begin(),v.end(),p),v.end());
    for(auto it : v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}