#include <bits/stdc++.h>
#define N 100005
using namespace std;
ifstream fin("interclasare.in");
ofstream fout("interclasare.out");
int a[N],b[N],c[N*2];
int main(){
    int n,m,i,j,k;

    fin>>n;
    for(i=1;i<=n;++i) fin>>a[i];
    fin>>m;
    for(j=1;j<=m;++j) fin>>b[j];

    i=j=1;
    k=0;
    while(i<=n && j<=m)
        if(a[i]<b[j]) c[++k]=a[i++];
        else c[++k]=b[j++];
    while(i<=n) c[++k]=a[i++];
    while(j<=m) c[++k]=b[j++];

    for(i=1;i<=k;++i){
        fout<<c[i]<<' ';
        if(i%10==0) fout<<endl;
    }
    return 0;
}
