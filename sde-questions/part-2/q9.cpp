#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> a = {1,3,5,7};
    vector<int> b = {0,2,6,8,9};
    int i,j,m,n;
    m=a.size();
    n=b.size();
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>b[j])
            swap(a[i],b[j]);
        }
    }
    sort(b.begin(),b.end());
    for (auto it : a)
    cout<<it<<" ";
    for(auto it : b)
    cout<<it<<" ";
    return 0;
}