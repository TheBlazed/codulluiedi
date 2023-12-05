#include <iostream>
using namespace std;
int main()
{
    long long n, s=1;
    cin>>n;
    for(int i=0; i<n; i++)
        s=s+i*6;
    cout<<s;
}