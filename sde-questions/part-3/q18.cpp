#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v1 = {1,3,2,3,1};
    vector<int> v = {3,2,1,4};
    int i,j,s,c=0;
    s=v.size();
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(v[i]>2*v[j])
            c++;
        }
    }
    cout<<c;
    return 0;
}