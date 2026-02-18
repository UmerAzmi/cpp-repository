#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v = {3,1,2,5,3};
    vector<int> v1 = {3,1,2,5,4,6,7,5};
    vector<int> v3 = {8,4,1,6,7,2,5,8};
    vector<int> v2 = {10,11,1,12,3,4,13,8,2,6,7,9,5,3};
    int i,j,p,q,s;
    s=v.size();
    sort(v.begin(),v.end());
    for(i=1;i<=s;i++)
    {
            if(v[i-1]==v[i])
            {
                p=v[i];
            }
            auto it = find(v.begin(),v.end(),i);
            if(it==v.end())
            q=i;
    }
    cout<<p<<endl;
    cout<<q;
    return 0;
}