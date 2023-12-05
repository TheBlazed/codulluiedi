#include <iostream>
using namespace std;
int main()
{
    long long p=1;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<b;i++)
        p*=a;
    cout<<p;
    return 0;
}