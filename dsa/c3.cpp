#include <iostream>
using namespace std;

int main ()
{
    int n,i,j,s;
    i=1;
    n=6;
    while (i<=n)
    {
        j=1;
        s=n-i;
        while(s>=1)
        {
            cout<<" ";
            s--;
        }
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}