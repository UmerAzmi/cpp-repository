#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<vector<int>> v1 = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector<vector<int>> v2 = {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> v = {{0,1}};
    int m = v.size();
    int n = v[0].size();
    int i,j,k,l;
    vector<pair<int,int>> p;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i][j]==0){
                p.push_back({i,j});
            }
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(auto it : p) 
    {
        for(k=0;k<m;k++)
        {
            for(l=0;l<n;l++)
            {
                v[it.first][l]=0;
                v[k][it.second]=0;
            }
        }
    }

    for (auto i2 : v)
    { 
        for(auto i3 : i2)
        {
            cout<<i3<<" ";
        }
        cout<<endl;
    }
    return 0;
}