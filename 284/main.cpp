#include <bits/stdc++.h>
#define N 100005
using namespace std;
ifstream fin("interclasare3.in");
ofstream fout("interclasare3.out");
int a[N],b[N],c[2*N];
int main(){
    int n,m,i,j,k,l;
    fin>>n>>m;
    for(i=1;i<=n;++i) fin>>a[i];
    for(i=1;i<=m;++i) fin>>b[i];
    i=j=1;
    k=l=0;
    while(i<=n && j<=m)
        if(a[i]<b[j]) c[++k]=a[i++];
        else if(a[i]>b[j]) c[++k]=b[m--];
        else{
            c[++k]=b[m--];
        	++i;
        }
    while(i<=n) c[++k]=a[i++];
    while(m) c[++k]=b[m--];
    for(int x=1,y=1;x<=k;++x){
        if(c[y]%2==0) fout<<c[y++]<<' ';
        if(y%20==0) fout<<endl;
    }
    return 0;
}
