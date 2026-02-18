#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v = {7,1,5,3,6,4};
    vector<int> v1 = {7,6,4,3,1};
    int i,j,m,n,d,di,maxi;
    vector<int> b;
    m=v.size();
    n = *(min_element(v.begin(),v.end()));
    auto it = find(v.begin(),v.end(),n);
    di = distance(v.begin(),it);
    if(di+1!=m)
    {
        for(i=di+1;i<m;i++)
        {
            d=v[i]-v[di];
            b.push_back(d);
        }
        maxi = *(max_element(b.begin(),b.end()));
    }
    else 
    maxi = 0;
    cout<<maxi;
    return 0;
}