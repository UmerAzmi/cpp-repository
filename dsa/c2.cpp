#include <iostream>
using namespace std;

int main ()
{
    int n,i,j;
    char ch;
    i=1;
    n=4;
    while (i<=n)
    {
        j=1;
        ch='D'-i+1;
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}