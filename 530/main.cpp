#include <bits/stdc++.h>
#define N 100000
using namespace std;
int a[N],b[N],c[2*N],d[N];
int main(){
    int n,m,i,j,k,l;
    cin>>n;
    for(i=1;i<=n;++i) cin>>a[i];
    cin>>m;
    for(i=1;i<=m;++i) cin>>b[i];
    i=j=1;
    k=l=0;
    while(i<=n && j<=m)
        if(a[i]<b[j]) c[++k]=a[i++];
        else if(a[i]>b[j]) c[++k]=b[j++];
        else{
            c[++k]=b[j++];
            d[++l]=a[i++];
        }
    while(i<=n) c[++k]=a[i++];
    while(j<=m) c[++k]=b[j++];
    for(int x=1;x<=k;++x) cout<<c[x]<<' ';
    cout<<endl;
    for(int x=1;x<=l;++x) cout<<d[x]<<' ';
    return 0;
}
