#include <bits/stdc++.h>
using namespace std;

int main ()
{
    map<int,int> m; //stores key --> value
    m[1] = 2; // 1 --> 2
    m.emplace(3,1); // 3 --> 1
    m.insert({2,4}); // 2 --> 4
    // {1,2}, {2,4}, {3,1}

    for(auto it : m){
        cout<< it.first << " " <<it.second << endl;
    }

    cout<< m[1]<<endl; // 1--> 2 
    cout<< m[5]; // 5 --> ?
    //erase,swap,size,empty are same 

    //multimap can store duplicate keys

    //unordered map stores unique but unsorted keys
    
    return 0;
}