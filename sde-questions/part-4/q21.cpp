#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v = {15,6,2,1,16,4,2,29,9,12,8,5,14,21,8,12,17,16,6,26,3};
    vector<int> v1 = {100,200,1,3,2,4};
    vector<int> v2 = {3, 8, 5, 7, 6};
    sort(v.begin(),v.end());
    unique(v.begin(),v.end());
    int i,j,s,m;
    vector<int> l;
    s=v.size();
    for(i=0;i<s-1;i++)
    {
        for(j=i;j<s;j++)
        {
            if(v[j]+1!=v[j+1])
            break;
        }
        l.push_back(j-i+1);
    }
    m=*(max_element(l.begin(),l.end()));
    cout<<m;
    return 0;
}