#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N];
int main()
{
    int i,n,mi=1e6,ma=0,pi,pa;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<=n;++i){
        if(mi>a[i]){
            pi=i;
            mi=a[i];
        }
        if(ma<a[i]){
            pa=i;
            ma=a[i];
        }
    }
    if(pi>pa) pi^=pa^=pi^=pa;
    for(i=pi;i<=pa;++i) cout<<a[i]<<' ';
    return 0;
}
