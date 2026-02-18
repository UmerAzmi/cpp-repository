#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j,m,n,t=16;
    bool f=false;
    m=v.size();
    n=v[0].size();
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i][j]==t)
            {
                f=true;
                break;
            }
        }
    }
    cout<<f;
    return 0;
}