#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> m1 = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int i,j,s;
    s=m.size();
    vector<vector<int>> r(s,vector<int>(s,0));
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            r[j][s-i-1]=m[i][j];
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            m[i][j]=r[i][j];
        }
    }
    for(auto it : m)
    {
        for (auto it2 : it)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }
    return 0;
}