#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v1 = {9, -3, 3, -1, 6, -5};
    vector<int> v2 = {6, -2, 2, -8, 1, 7, 4, -10};
    vector<int> v3 = {1, 0, -5};
    vector<int> v = {1, 3, -5, 6, -2};
    sort(v.begin(),v.end());
    int i,j,k,s,m,sum;
    vector<int> l = {0};
    s=v.size();
    for(i=0;i<s-1;i++)
    {
        for(j=i;j<s;j++)
        {
            sum=0;
            for(k=i;k<=j;k++)
            {
                sum+=v[k];
            }
            if(sum==0)
            {
                l.push_back(j-i+1);
            }
        }
    }
    m=*(max_element(l.begin(),l.end()));
    cout<<m;
    return 0;
}