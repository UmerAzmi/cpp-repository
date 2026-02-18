#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v = {7,1,5,3,6,4};
    vector<int> v1 = {7,6,4,3,1};
    int i,j,m,d;
    vector<int> b;
    m=v.size();
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            d=v[j]-v[i];
            b.push_back(d);
        }
    }
    cout<<*(max_element(b.begin(),b.end()));
    return 0;
}