#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v2 = {3,1,2,5,3};
    vector<int> v1 = {3,1,2,5,4,6,7,5};
    vector<int> v3 = {8,4,1,6,7,2,5,8};
    vector<int> v = {10,11,1,12,3,4,13,8,2,6,7,9,5,3};
    int i,j,p,q,s,ct;
    vector<int> c;
    s=v.size();
    for(i=1;i<=s;i++)
    {
        ct=count(v.begin(),v.end(),i);
        c.push_back(ct);
    }
    for(i=0;i<s;i++)
    {
        if(c[i]==2)
        p=i+1;
        if(c[i]==0)
        q=i+1;
    }
    cout<<p<<endl;
    cout<<q;
    return 0;
}