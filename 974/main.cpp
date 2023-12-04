#include <iostream>

using namespace std;

int main()
{
    long long n,k,s=0;
    cin>>n>>k;
    cout<<((n/k)*(k-1)*k)/2+((n%k+1)*(n%k))/2;
    return 0;
}