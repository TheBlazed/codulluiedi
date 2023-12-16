#include <bits/stdc++.h>
#define N 100005
using namespace std;
ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");
int a[N],b[N],c[2*N];
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
        	++i;
        }
    while(i<=n) c[++k]=a[i++];
    while(j<=m) c[++k]=b[j++];
    for(int x=1;x<=k;++x){
        fout<<c[x]<<' ';
        if(x%10==0) fout<<endl;
    }
    return 0;
}
