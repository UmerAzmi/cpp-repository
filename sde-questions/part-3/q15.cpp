#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v = {3,2,3};
    vector<int> v1 = {4,4,2,4,3,4,4,3,2,4};
    vector<int> v2 = {2,2,1,1,1,2,2};
    vector<int> s,c;
    int i,j,m,m1,n,ct,e,d;
    m=v.size();
    for(i=0;i<m;i++)
    {
        ct=count(s.begin(),s.end(),v[i]);
        if(ct==0)
        s.push_back(v[i]);
    }
    sort(s.begin(),s.end());
    m1=s.size();
    for(i=0;i<m1;i++)
    {
        e=s[i];
        ct=count(v.begin(),v.end(),e);
        c.push_back(ct);
    }
    n=*(max_element(c.begin(),c.end()));
    auto it = find(c.begin(),c.end(),n);
    d=distance(c.begin(),it);
    cout<<s[d];
    return 0;
}