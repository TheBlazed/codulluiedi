#include <bits/stdc++.h>
#define N 105
using namespace std;
ifstream fin("zone.in");
ofstream fout("zone.out");
int a[N],b[N],c[N];
int main(){
    int n,i,x,y;
    x=y=-1;
    fin>>n;
    for(i=1;i<=n;++i) fin>>a[i];
    for(i=1;i<=n;++i) fin>>b[i];
    for(i=1;i<=n;++i) fin>>c[i];

    for(i=1;i<=n && (x==-1 || y==-1);++i){
        if(a[i]%2==0 && x==-1) x=i;
        if(c[n-i+1]%2!=0 && y==-1) y=n-i+1;
    }
    if(x!=-1 && y!=-1) swap(a[x],c[y]);
    
    for(i=1;i<=n;++i) fout<<a[i]<<' ';
    for(i=1;i<=n;++i) fout<<b[i]<<' ';
    for(i=1;i<=n;++i) fout<<c[i]<<' ';
    return 0;
}