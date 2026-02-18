#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<vector<int>> m1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> m = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int i,j,s;
    s=m.size();
    for(i=0;i<s;i++)
    {
        for(j=0;j<i;j++)
        {
            swap(m[i][j],m[j][i]);
        }
    }
    for(i=0;i<s;i++)
    {
        reverse(m[i].begin(),m[i].end());
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