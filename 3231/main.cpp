#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cout<<i<<' ';
    cout<<"\n";
    for(int i=n; i>=1; i--)
        cout<<i<<' ';
}