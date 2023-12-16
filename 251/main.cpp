#include <bits/stdc++.h>
#define N 100005
using namespace std;
ifstream fin("interclasare2.in");
ofstream fout("interclasare2.out");
int a[N],b[N],c[2*N],d[N];
int main(){
    int n,m,i,j,k,l;
    fin>>n;
    for(i=1;i<=n;++i) fin>>a[i];
    fin>>m;
    for(i=1;i<=m;++i) fin>>b[i];
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
    for(int x=1;x<=l;++x){
        fout<<d[x]<<' ';
        if(x%10==0) fout<<endl;
    }
    return 0;
}
