#include <bits/stdc++.h>
using namespace std;
#define N 105
int a[N];
int main(){
    int n,i,c;
    bool ok=1;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    for(i=1;i<=n && ok;++i){
        c=log10(a[i])+1;
        if(c%2) ok=0;
    }
    if(ok) cout<<"DA";
    else cout<<"NU";
    return 0;
}