#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> v;

    v.push_back(1); //{1}
    v.emplace_back(2); //{1,2}
    cout<<v[1]<<endl;

    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(1,2);

    vector<int> v3(5,10);  //{10,10,10,10,10}

    vector<int> v4 = {10,20,30,40,50};

    vector<int>::iterator it = v4.begin();
    it++;
    cout << *(it)<<endl;
    vector<int>::iterator it2 = v4.end();
    cout<<v4.back()<<endl;

    for(vector<int>::iterator it = v4.begin(); it !=v4.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<<endl;

    for(auto it =v4.begin(); it != v4.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<<endl;

    for(auto it : v4) {
        cout<< it << " ";
    }
    cout<<endl;

    v4.erase(v4.begin()+1);  //10,30,40,50
    for(auto it : v4) {
        cout<< it << " ";
    }
    cout<<endl;

    v4.insert(v4.begin()+1, 80); //10,80,30,40,50
    for(auto it : v4) {
        cout<< it << " ";
    }
    cout<<endl;

    cout<<v4.size()<<endl;

    v4.pop_back();
    for(auto it : v4) {
        cout<< it << " ";
    }
    cout<<endl;

    v4.clear();

    return 0;
}