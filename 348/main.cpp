#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(long long i=1;i<=m;i*=n)
        cout<<i<<' ';
    return 0;
}