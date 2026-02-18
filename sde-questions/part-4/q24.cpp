#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string v = "abcabcbb";
    string v1 = "bbbbb";
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