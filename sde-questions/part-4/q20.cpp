#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v1 = {1,0,-1,0,-2,2};
    vector<int> v = {4,3,3,4,4,2,1,2,1,1};
    int a,b,c,d,s,ct;
    int t=9;
    s=v.size();
    vector<vector<int>> r;
    vector<int> p;
    for(a=0;a<s-3;a++)
    {
        for(b=a+1;b<s-2;b++)
        {
            for(c=b+1;c<s-1;c++)
            {
                for(d=c+1;d<s;d++)
                {
                    if(v[a]+v[b]+v[c]+v[d]==t)
                    {
                        p={v[a],v[b],v[c],v[d]};
                        sort(p.begin(),p.end());
                        ct=count(r.begin(),r.end(),p);
                        if(ct==0)
                        r.push_back(p);
                    }
                }
            }
        }
    }
    for(auto it : r)
    {
        for(auto it2 : it)
        cout<<it2<<" ";
        cout<<endl;
    }
    return 0;
}