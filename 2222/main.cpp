#include <iostream>
using namespace std;
int main()
{
    long long n;
    int k, c=-1;
    cin>>n>>k;
    while(n)
    {
        c++;
        n/=10;
    }
    cout<<1;
    for(int i=0;i<k;i++)
        for (int j=0;j<c;j++)
            cout<<0;
    return 0;
}