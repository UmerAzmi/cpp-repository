#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v = {2,0,2,1,1,0};
    int c0=0,c1=0,c2=0;
    for(auto it : v) {
        if(it==0)
        c0++;
        if(it==1)
        c1++;
        if(it==2)
        c2++;
    }
    v.clear();
    int i;
    for(i=1;i<=c0;i++)
    v.push_back(0);
    for(i=1;i<=c1;i++)
    v.push_back(1);
    for(i=1;i<=c2;i++)
    v.push_back(2);
    
    return 0;
}