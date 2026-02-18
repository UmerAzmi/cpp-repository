#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> s = {1,2,3};
    vector<int> s1 = s;
    vector<vector<int>> p;
    sort(s.begin(),s.end());
    do {
        p.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    auto it = find(p.begin(),p.end(),s1);
    int d = distance(p.begin(),it);
    d++;
    int sz = p.size();
    if(d==sz)
    d=0;
    for(auto i2 : p[d])
        {
            cout<<i2<<" ";
        }
    return 0;
}