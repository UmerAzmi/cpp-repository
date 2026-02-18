#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v= {1,5,3,2,4};

    sort(v.begin(),v.end()); //ascending order
    for(auto it : v) {
        cout<< it << " ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>()); //descending order
    for(auto it : v) {
        cout<< it << " ";
    }
    cout<<endl;

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    // bool comp(pair<int,int> p1, pair<int,int> p2) {
    //     if(p1.second < p2.second) return true;
    //     if(p1.second > p2.second) return false;
    //     //they are same

    //     if(p1.first > p2.first) return true;
    //     return false;
    // }

    //my way comparing: sort(a,a+nc,comp)

    //algo 2
    int n = 7;
    int c = __builtin_popcount(n); //returns number of 1s in binary
    cout<<c<<endl;

    //algo 3
    string s = "123";
    do {
        cout << s <<endl;
    } while(next_permutation(s.begin(),s.end()));

    //algo 4
    vector<int> v2 = {1,10,5,6};
    int maxi = *(max_element(v2.begin(),v2.end()));
    cout << maxi <<endl;
    
    int mini = *(min_element(v2.begin(),v2.end()));
    cout << mini <<endl;

    return 0;
}