#include <bits/stdc++.h>
#define N 205
int a[N];
using namespace std;
int main()
{
    int n,s=0,i;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>a[i];
        s+=a[i];
    }
    for(i=1;i<=n;++i) cout<<s-a[i]<<' ';
    return 0;
}
