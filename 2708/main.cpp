#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        cout<<(x&1LL==1)<<' ';
    }
    return 0;
}
