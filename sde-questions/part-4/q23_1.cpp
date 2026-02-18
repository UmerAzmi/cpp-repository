#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v2 = {4, 2, 2, 6, 4};
    vector<int> v = {5, 6, 7, 8, 9};
    vector<int> v1 = {1,2,3,2};
    int t = 5;
    int i,j,k,x,s,ct=0;
    s=v.size();
    for(i=0;i<s;i++)
    {
        x=0;
        for(j=i;j<s;j++)
        {
                x^=v[j];
                if(x==t)
                ct++;
        }
        
    }
    cout<<ct;
    return 0;
}