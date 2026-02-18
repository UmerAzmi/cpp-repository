#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n=5,r=1,c=1;
    vector<vector<int>> v;
    int i,j;
    for (int i = 0; i <n; i++) {
        vector<int> iv(i+1,1);
        v.push_back(iv);
    }
    for(i=2;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
    }
    cout<<v[r-1][c-1]<<endl;
    for(j=0;j<n;j++)
    {
        cout<<v[n-1][j]<<" ";
    }
    cout<<endl;
    for (auto i1 : v)
    { 
        for(auto i2 : i1)
        {
            cout<<i2<<" ";
        }
        cout<<endl;
    }
    return 0;
}