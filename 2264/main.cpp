#include <iostream>
using namespace std;
int main()
{
    int n, c, s=0;
    cin>>n;
    for(int i=1; i<=2; i++)
    {
        c=n%10;
        s+=c;
        n/=10;
    }
    cout<<s;
    return 0;
}