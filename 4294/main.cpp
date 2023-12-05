#include <iostream>
using namespace std;
int main()
{
    int n, a=1, b, c;
    cin>>n;
    if (n%2==0)
        c=n/2;
    else
        c=n/2+1;
    for(b=n-1; b>=c; a++, b--)
        cout<<a<<' '<<b<<"\n";
    return 0;
}