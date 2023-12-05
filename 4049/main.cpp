#include <iostream>
using namespace std;
int main()
{
    long long n, nn;
    int c=-1;
    cin>>n;
    nn=n;
    while(n)
    {
        n/=10;
        c++;
    }
    cout<<nn;
    for(int i=1;i<nn-c;i++)
        cout<<0;
    return 0;
}