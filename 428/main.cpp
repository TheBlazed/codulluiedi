#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,i,c,n10=0;
    cin>>b>>n;
    for(i=1;i<=n;++i){
        cin>>c;
        n10=n10*b+c;
    }
    cout<<n10;
    return 0;
}
