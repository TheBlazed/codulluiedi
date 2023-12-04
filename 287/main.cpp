#include <bits/stdc++.h>
#define N 505
int a[N];
bool cr[15]={0};
using namespace std;
int main()
{
    int n,i,j,k;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>k;
        ok=1;
        for(j=1;j<=k;++j) cin>>a[j];
        for(j=2;j<=k && ok;++j) if(a[j-1]>a[j]) ok=0;
        if(ok) cr[i]=1;
    }
    for(i=1;i<=n;++i) cout<<cr[i]<<' ';
    return 0;
}