#include <iostream>
using namespace std;
int main()
{
    int n, m=0;
    cin>>n;
    m=n%10*10+n/10;
    cout<<m*m;
    return 0;
}