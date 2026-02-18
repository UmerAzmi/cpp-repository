#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v1 = {4, 2, 2, 6, 4};
    vector<int> v2 = {5, 6, 7, 8, 9};
    vector<int> v = {1,2,3,2};
    int t = 2;
    int i,j,k,x,s,ct=0;
    s=v.size();
    for(i=0;i<s;i++)
    {
        for(j=i;j<s;j++)
        {
            x=0;
            for(k=i;k<=j;k++)
            {
                x^=v[k];
            }
            if(x==t)
                ct++;
        }
    }
    cout<<ct;
    return 0;
}