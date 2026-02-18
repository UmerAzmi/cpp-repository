#include <iostream>
using namespace std;

int main ()
{
    int n,i,sum;
    i=2;
    sum=0;
    cout << "Enter value of n: ";
    cin >> n;
    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    cout <<"Sum of even numbers till " <<n <<" = " <<sum;
    return 0;
}