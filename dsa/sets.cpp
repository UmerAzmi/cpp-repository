#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //sets
    set<int> s;
    s.insert(1); // {1}
    s.emplace(2); // {1,2}
    s.insert(2); // {1,2} no repeat
    s.insert(4); // {1,2,4}
    s.insert(3); // {1,2,3,4}

    auto it = s.find(3);

    auto it2 = s.find(6); // returns s.end()

    s.erase(4); // {1,2,3}

    int c = s.count(1); 
    cout<<c;


    //multiset
    multiset<int> ms; //stores multiple values
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    // ms.erase(1); erases all 1's

    ms.erase(ms.find(1)); //erase only one 1


    //unordered sets
    unordered_set<int> us;
    //does not store in sorted order
    //all functions are same 
    //lowerbound and upper bound do not work
    
    return 0;
}