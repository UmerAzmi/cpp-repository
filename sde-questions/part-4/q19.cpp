#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v = {2,6,5,8,11};
    int t=15;
    int i,j,s,f=0;
    s=v.size();
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(v[i]+v[j]==t)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
        i=-1;
        j=-1;
    }
    cout<<i<<" "<<j;
    return 0;
}