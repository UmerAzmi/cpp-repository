#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    int i,j,k,m,p=0;
    vector<int> s;
    m=a.size();
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            p=0;
            for(k=i;k<=j;k++)
            {
                p+=a[k];
            }
            s.push_back(p);
        }
    }
    cout << *(max_element(s.begin(),s.end()));
    return 0;
}