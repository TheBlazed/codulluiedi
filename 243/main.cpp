#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    a=(2-2*n+round(sqrt(2*n))+ pow(round(sqrt(2*n)),2))/2;
    cout<<a;
    return 0;
}
